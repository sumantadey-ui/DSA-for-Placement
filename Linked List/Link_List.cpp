#include<iostream>
#include<map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Distructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free node with data " << endl;
    }
};

void insertAtHead(Node *&head, int d)
{
    // New node Create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{
    // New node Create
    Node *temp = new Node(d);
    tail->next = temp;
    // tail=tail->next;
    tail = temp;
}
void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{

    // Insert at starting position
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // Insert at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // Creating new node
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head)
{

    // Deleting start node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // For memory free
        temp->next = NULL;
        delete temp;
    }
    // Deleting mid or last node
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;

        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}

bool detectLoop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }

    map<Node *, bool> visited;

    Node *temp = head;
    while (temp != NULL)
    {

        // Cycle present
        if (visited[temp] == true)
        {
            cout<<"Cycle is present on "<<temp->data<<endl;
            return 1;
        }

        // Cycle not present

        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

Node* floyedDetectLoop(Node* head){
    if (head == NULL)
    {
        return NULL;
    }

    Node* slow= NULL;
    Node* fast= NULL;

    while(slow != NULL && fast != NULL){
        fast= fast ->next;
        if(fast != NULL){
            fast = fast->next;
        }

        slow = slow->next;

        if(slow == fast){
            cout<<"Cycle is present at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

void print(Node *&head)
{

    if (head == NULL)
    {
        cout << "List is empty..." << endl;
        return;
    }

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool isCircular(Node *head)
{

    // empty list
    if (head == NULL)
    {
        return true;
    }

    Node *temp = head->next;

    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if (temp == head)
    {
        return true;
    }
    return false;
}

int main()
{
    // Created a new node
    Node *node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    print(head);
    // insertAtHead(head,12);
    insertAtTail(tail, 12);
    print(head);
    // insertAtHead(head,15);
    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(head, tail, 3, 22);

    print(head);
    insertAtPosition(head, tail, 1, 21);
    print(head);

    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

    // deleteNode(1, head);
    // print(head);
    // deleteNode(3, head);
    // print(head);
    /*deleteNode(4, head);
    print(head);

    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;

    cout<<endl<<endl;
    */

    /*

     if(isCircular(tail)){
         cout<<"It is a circular linked list..."<<endl;
     }
     else{
         cout<<"It is not a circular linked list..."<<endl;
     }
     cout<<endl<<endl;

    */


   // To detect cycle is present or not
    tail->next = head->next;
    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;
    
    if(detectLoop(head)){
        cout<<"Cycle is present..."<<endl;
    }
    else{
        cout<<"Cycle is not present..."<<endl;
    }

    

    // if(floyedDetectLoop(head) != NULL){
    //     cout<<"Cycle is present..."<<endl;
    // }
    // else{
    //     cout<<"Cycle is not present..."<<endl;
    // }


    return 0;
}