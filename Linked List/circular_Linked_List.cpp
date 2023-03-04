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

void insertNode(Node* &tail, int element, int d){
    //For empty list
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next=newNode;
    }
    else{
        //For Non empty list
        //Assuming the element is present in the linked list
        Node* curr = tail;
        while(curr->data != element){
            curr= curr->next;
        }

        // element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;


    }
}


void deleteNode(Node* &tail, int value){

    //Empty list
    if(tail == NULL){
        cout<<"List is already empty check again "<<endl;
    }
    else{
        // For non Empty list
        // assuming that value is present in the linked list
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        //// For 1 node linked list
        if(curr == prev){
            tail = NULL;
        }

        //For >=2 Node
        if(tail == curr){
            tail = prev;
        }

        prev->next = curr->next;
        curr->next= NULL;
        delete curr;

    }


}


// Traversing a Link list
void print(Node* &tail){
    Node* temp = tail;

    


    //Empty list
    if(tail == NULL){
        cout<<"Empty Linked List..."<<endl;
        return;
    }
    
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
    cout<<endl;

}

int main()
{

    Node* tail = NULL;

    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,7);
    print(tail);
    // insertNode(tail,7,9);
    // print(tail);
    // insertNode(tail,9,11);
    // print(tail);
    // insertNode(tail,3,12);
    // print(tail);
    // insertNode(tail,11,17);
    // print(tail);

    deleteNode(tail, 3);
    print(tail);

    // deleteNode(tail, 9);
    // print(tail);
    // deleteNode(tail, 17);
    // print(tail);
    // deleteNode(tail, 12);
    // print(tail);
    // deleteNode(tail, 11);
    // print(tail);
    // deleteNode(tail, 7);
    // print(tail);


    return 0;
}