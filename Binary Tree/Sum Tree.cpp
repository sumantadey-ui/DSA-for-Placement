// ..........GFG----------
/*
class Solution
{

public:
    pair<bool, int> isSumFast(Node *root)
    {

        // Base case
        if (root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        //Leaf node case
        if (root->left == NULL && root->right == NULL)
        {
            pair<bool, int> p = make_pair(true, root->data);
            return p;
        }

        pair<bool, int> leftAns = isSumFast(root->left);
        pair<bool, int> rightAns = isSumFast(root->right);

        bool isLeftSumTree = leftAns.first;
        bool isRighttSumTree = rightAns.first;

        bool condition = root->data == leftAns.second + rightAns.second;

        pair<bool, int> ans;

        if (isLeftSumTree && isRighttSumTree && condition)
        {
            ans.first = true;
            ans.second = root->data + leftAns.second + rightAns.second;
        }
        else
        {
            ans.first = false;
        }
        return ans;
    }

    bool isSumTree(Node *root)
    {
        return isSumFast(root).first;
    }
};

*/