// Leetcode 5


Node* reverseLinkedList(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;

    Node* forword = NULL;

    while(curr != NULL){
        forword  = curr -> next;
        curr->next = prev;
        prev = curr;
        curr = forword;
    }
    return prev;
}

// In recursive way-----------> Optimaal Sol
void reverse(Node* &head, Node* curr, Node* prev){

    //Base case
    if(curr == NULL){
        head = prev;
        return;
    }

    // Node* forword= curr->next;
    reverse(head, curr->next, curr);

    curr->next = prev;

}
