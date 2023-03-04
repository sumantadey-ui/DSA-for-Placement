// LeetCode 7
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    // Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};



Node* kReverse(Node* head , int k){

    //base case
    if(head==NULL){
        return NULL;
    }

    // step 1 reverse first k nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while(curr != NULL && count < k){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count ++;
    }

    // step 2 Recursion will look into the matter
    
    if(next != NULL){
        head-> next =kReverse(next, k);
    }

    // step 3 return head of the linked list 
    return prev;

}



void insertAtHead(Node* &head, int d){
    //New node Create
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail, int d){
    //New node Create
    Node* temp = new Node(d);
    tail->next=temp;
    // tail=tail->next;
    tail = temp;
}
void insertAtPosition(Node* &head,Node* &tail, int position, int d){

    // Insert at starting position
    if(position==1){
        insertAtHead(head, d);
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
        insertAtTail(tail, d);
        return;
    }


    //Creating new node
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next= nodeToInsert;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    //Created a new node
    Node* node1 = new Node(13);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head,14);
    insertAtHead(head,15);
    insertAtHead(head,16);
    insertAtHead(head,17);
    insertAtHead(head,18);
    insertAtHead(head,19);
    insertAtHead(head,20);
    insertAtHead(head,21);

    print(head);
    
    cout<<"Reverse k value..."<<endl;
    kReverse(head, 2);
    print(head);

    return 0;
}



