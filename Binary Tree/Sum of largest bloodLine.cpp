// Sum of  a largest bloodline of a binary tree(sum of nodes on the largest part from the leaf node)----gfg
/*
class Solution
{

public:
    void solve(Node *root, int sum, int &maxSum, int len, int &maxlen)
    {

        // base case
        if (root == NULL)
        {
            if (len > maxlen)
            {
                maxlen = len;
                maxSum = sum;
            }

            else if (len == maxlen)
            {
                maxSum = max(sum, maxSum);
            }
            return;
        }

        sum = sum + root->data;
        solve(root->left, sum, maxSum, len + 1, maxlen);
        solve(root->right, sum, maxSum, len + 1, maxlen);
    }

    int sumOfLongRootToLeafPath(Node *root)
    {
        int len = 0;
        int maxlen = 0;
        iny sum = 0;
        int maxSum = INT_MIN;

        solve(root, sum, maxSum, len, maxlen);
        return maxSum;
    }
};
*/