#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    //Distructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free node with data "<<data<<endl;
    }
};

void insertAtHead(Node* &head,Node* &tail, int d){
    //empty list
    if(head == NULL){
        Node* temp= new Node(d);
        head = temp;
        tail= temp;
    }
    else{
        Node* temp = new Node(d);
        temp ->next= head;
        head ->prev =  temp;
        head =  temp;
    }
}
void insertAtTail(Node* &head,Node* &tail, int d){
    if(tail == NULL){
        Node* temp= new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next =temp;
        temp->prev = tail;
        tail = temp;
    }

}
void insertAtPosition(Node* &head,Node* &tail, int position, int d){
    // Insert at starting position
    if(position==1){
        insertAtHead(head,tail, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    // Insert at last position
    if(temp->next==NULL){
        insertAtTail(head,tail, d);
        return;
    }


    //Creating new node
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev= nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev=temp;
}



void deleteNode(int position, Node* &head){
    
    //Deleting start node
    if(position==1){
        Node* temp = head;
        head= head->next;
        // For memory free
        temp->next->prev=NULL;
        temp->next = NULL;
        delete temp;
    }
    //Deleting mid or last node
    else{
        Node* curr= head;
        Node* prev= NULL;

        int cnt =1;

        while(cnt< position){
            prev = curr;
            curr = curr->next;
            cnt ++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next=NULL;

        delete curr;
    }
}



// Traversing a Link list
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node* &head){
    Node* temp = head;

    int len =0;
    while(temp != NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

int main()
{
    // Node* node1 = new Node(10);
    // Node* head= node1;
    // Node* tail= node1;

    Node* head= NULL;
    Node* tail= NULL;

    print(head);
    cout<<getLength(head)<<endl;

    insertAtHead(head,tail,11);
    print(head);
    insertAtHead(head,tail,13);
    print(head);
    insertAtHead(head,tail,8);
    print(head);


    insertAtTail(head,tail,21);
    print(head);

    insertAtPosition(head, tail, 2, 33);
    print(head);
    insertAtPosition(head, tail, 1, 101);
    print(head);

    // cout<<"Head "<<head->data<<endl;
    // cout<<"Tail "<<tail->data<<endl;

    insertAtPosition(head, tail, 7, 102);
    print(head);
    
    deleteNode(1, head);
    print(head);
   
    deleteNode(4, head);
    print(head);

    deleteNode(5, head);
    print(head);
   
    return 0;
}