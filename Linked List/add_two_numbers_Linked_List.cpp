// Add two numbers represented by Linked List ---g f g
/*
class solution
{
private:
    Node *reverse(Node *head)
    {
        Node *curr = head;
        Node *prev = NULL;
        Node *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void insertAtTail(struct Node *head, struct Node *tail, int value)
    {
        Node *temp = new Node(value);

        // Empty Case
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    struct Node *add(struct Node *first, struct Node *second)
    {

        int carry = 0;

        Node *ansHead = NULL;
        Node *ansTail = NULL;

        while (first != NULL && second != NULL)
        {
            int sum = carry + first->data + second->data;
            int digit = sum % 10;
            // Create node and add in ans Linked List
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;
            first = first->next;
            second = second->next;
        }
        while (first != NULL)
        {
            int sum = carry + first->data;
            int digit = sum % 10;
            // Create node and add in ans Linked List
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;
            first = first->next;
        }
        while (second != NULL)
        {
            int sum = carry + second->data;
            int digit = sum % 10;
            // Create node and add in ans Linked List
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;
            second = second->next;
        }
        // In last case if carry is generated
        while (carry != 0)
        {
            int sum = carry;
            int digit = sum % 10;
            // Create node and add in ans Linked List
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;
        }
        return ansHead;
    }

public:
    struct Node *addTwoLists(struct Node *first, struct Node *second)
    {
        // Step 1 ----> Reverse the Linked List
        first = reverse(first);
        second = reverse(second);

        // Step 2 ----> add two Linked List
        Node *ans = add(first, second);

        // Step 3 ----> Reverse ans List
        ans = reverse(ans);

        return ans;
    }
};

*/

// Add function in single while loop 
/*
struct Node *add(struct Node *first, struct Node *second)
{

    int carry = 0;

    Node *ansHead = NULL;
    Node *ansTail = NULL;

    while (first != NULL || second != NULL || carry != 0)
    {
        int val1 = 0;
        if (first != NULL)
        {
            val1 = first->data;
        }

        int val2 = 0;
        if (second != NULL)
        {
            val1 = second->data;
        }

        int sum = carry + val1 + val2;
        int digit = sum % 10;

        // Create node and add in ans Linked List
        insertAtTail(ansHead, ansTail, digit);

        carry = sum / 10;
        if (first != NULL)
        {
            first = first->next;
        }

        if (second != NULL)
        {
            second = second->next;
        }
    }
    return ansHead;
}
*/