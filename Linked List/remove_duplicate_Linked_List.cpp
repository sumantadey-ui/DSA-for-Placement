// LeetCode 5
/*

Node *uniqueSortedList(Node *head)
{

    // Base case
    if (head == NULL)
    {
        return NULL;
    }

    // Non empty list

    Node *curr = head;

    while (curr != NULL)
    {
        // Equal case
        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            Node *next_next = curr->next->next;
            Node *nodeToDelete = curr->next;
            delete (nodeToDelete);
            curr->next = next_next;
        }
        else // Not equal case
        {
            curr = curr->next;
        }
    }

    return head;
}

*/