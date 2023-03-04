// Clone a linked list with random pointers---- g f g
/*
class solution
{
private:
    void insertAtTail(Node *&head, Node *&tail, int data)
    {
        Node *newNode = new Node(data);

        // Empty Case
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

public:
    Node *copyList(Node *head)
    {
        // Step1 --- Create a clone List

        Node *cloneHead = NULL;
        Node *cloneTail = NULL;

        Node *temp = head;
        while (temp != NULL)
        {
            inserAtTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }

        // Step 2--- Clone Nodes add in between original list

        Node *originalNode = head;
        Node *cloneNode = cloneHead;

        while (originalNode != NULL && cloneNode != NULL)
        {
            Node *next = originalNode->next;
            originalNode->next = cloneNode;
            originalNode = next;

            next = cloneNode->next;
            cloneNode->next = originalNode;
            cloneNode = next;
        }

        // step 3--- random Pointer copy

        temp = head;
        while (temp != NULL)
        {
            if (temp->next != NULL)
            {
                if (temp->random != NULL)
                {
                    temp->next->random = temp->random->next;
                }
                else
                {
                    temp->next = temp->random;
                }
            }
            temp = temp->next->next;
        }

        // step 4---revert changes done in step 2

        originalNode = head;
        cloneNode = head;

        while (originalNode != NULL && cloneNode != NULL)
        {
            originalNode->next = cloneNode->next;
            originalNode = originalNode->next;

            if (originalNode != NULL)
            {
                cloneNode->next = original->next;
            }
            cloneNode = cloneNode->next;
        }

        // step 5---return ans
        return cloneHead;
    }
};


*/