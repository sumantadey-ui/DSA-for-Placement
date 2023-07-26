// Leetcode 8


Node* sortList(Node* head){

    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;


    Node* temp = head;
    while (temp != NULL){
        if(temp -> data == 0){
            zeroCount++;
        }
        else if(temp ->data == 1){
            oneCount++;
        }
        else if(temp -> data == 2){
            TwoCount++;
        }
        temp= temp->next;
    }

    temp = head;

    while(temp != NULL){
        if( zeroCount != 0){
            temp -> data = 0;
            zeroCount--;
        }
        else if( oneCount != 0){
            temp -> data = 1;
            oneCount--;
        }
        else if( twoCount != 0){
            temp -> data = 2;
            twoCount--;
        }
        temp= temp->next;
    }
    return head;
}



// ************************************************

// Approach 2 --> with out data replace------creating 3 another dummy linked list and then merge it

/*

void insertAtTail(Node* &tail, Node* curr){

    tail->next = curr;
    tail = curr;
}

Node* sortList(Node* head){


    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr =head;

    // Create separate list for 0s 1s 2s
    while(curr != NULL){

        int value = curr -> data;

        if(value == 0){
            insertAtTail(zeroTail, curr);
        }
        else if(value == 1){
            insertAtTail(oneTail, curr);
        }
        else if(value == 2){
            insertAtTail(twoTail, curr);
        }

        curr = curr -> next;
    }

    // Mere 3 sublist
    // 1s list is not empty
    if(oneTail->next != NULL){
        zeroTail->next = oneHead->next;
    }
    else{
        // 1s list is empty
        zeroTail->next = twoHead->next;
    }

    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    // Set up head
    head = zeroHead->next;


    // delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;

}

*/
