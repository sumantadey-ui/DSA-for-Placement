// Check if Linked list pallindrome or not----gfg

// Approach 1--TC O(n) SC O(n)

/*
class solution
{
private:
    bool checkPallindrome(vector<int> arr)
    {
        int n = arr.size();
        int s = 0;
        int e = n - 1;

        while (s <= e)
        {
            if (arr[s] != arr[e])
            {
                return 0;
            }
            s++;
            e--;
        }
        return 1;
    }

public:
    bool isPallindrome(Node *head)
    {

        // create a array

        vector<int> arr;

        Node *temp = head;

        // Copy linked list contant in array

        while (temp != NULL)
        {
            arr.push_back(temp->data);
            temp = temp->next;
        }
        return checkPallindrome(head);
    }
};
*/

// Approach 2 Optimal sol---TC O(n) SC O(1)
/*
class solution
{
private:
    Node *getMid(Node *head)
    {
        Node *slow = head;
        Node *fast = head->next;

        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
    }

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

public:
    bool isPallindrome(Node *head)
    {
        if (head->next == NULL)
        {
            return true;
        }
        // Step 1 ----> find middle
        Node *middle = getMid(head);

        // Step 2 ---->Reverse linked list after middle
        Node *temp = middle->next;
        middle->next = reverse(temp);

        // Step 3 ----> Compare both halfs
        Node *head1 = head;
        Node *head2 = middle->next;
        while (head2 != NULL)
        {
            if (head1->data != head2->data)
            {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }

        // Step 4 ( optional ) ----> repeat step 2 
        temp = middle->next;
        middle->next = reverse(temp);

        return true;
    }
}

*/
