
/*


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

// Floyed Cycle Detect algo


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



*/