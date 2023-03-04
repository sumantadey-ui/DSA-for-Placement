// ................GFG...........

/*

class Solution
{

public:
    void traversalLeft(Node *root, vector<int> &ans)
    {

        // base case
        if ((root == NULL) || (root->left == NULL && root->right == NULL))
        {
            return;
        }
        ans.push_back(root->data);

        if (root->left)
        {
            traversalLeft(root->left, ans);
        }
        else
        {
            traversalLeft(root->right, ans);
        }
    }

    void traversalLeaf(Node *root, vector<int> &ans)
    {
        // BAse case
        if (root == NULL)
        {
            return;
        }
        if (root->left == NULL && root->right == NULL)
        {
            ans.push_back(root->data);
            return;
        }
        traversalLeaf(root->left, ans);
        traversalLeaf(root->right, ans);
    }

    void traversalRight(Node *root, vector<int> &ans)
    {
        // base case
        if ((root == NULL) || (root->left == NULL && root->right == NULL))
        {
            return;
        }
        if (root->right)
        {
            traversalRight(root->right, ans);
        }
        else
        {
            traversalRight(root->left, ans);
        }

        // while returrning
        ans.push_back(root->data);
    }
    vector<int> boundary(Node *root)
    {

        vector<int> ans;
        if (root == NULL)
        {
            return ans;
        }

        ans.push_back(root->data);

        // To print/ store left part
        traversalLeft(root->left, ans);

        // Traverse leaf node
        // Left subtree
        traversalLeaf(root->left, ans);
        // Right subtree
        traversalLeaf(root->right, ans);

        // Traverse right part
        traversalRight(root->right, ans);

        return ans;
    }
};

*/