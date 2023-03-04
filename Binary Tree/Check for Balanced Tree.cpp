// .............GFG.......
/*

Time Comp --- O(n^2)

class Solution
{

private:
    int height(struct Node *node)
    {

        // Base case
        if (node == NULL)
        {
            return 0;
        }

        int left = height(node->left);
        int right = height(node->right);

        int ans = max(left, right) + 1;

        return ans;
    }

public:
    bool isBalanced(Node *root)
    {
        // Base case
        if (root == NULL)
        {
            return false;
        }

        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);

        bool diff = abs(height(root->left) - height(root->right)) <= 1;

        if (left && right && diff)
        {
            return true;
        }
        return false;
    }
};
*/

// Another optimized sol TC O(n);

/*

class Solution{
    public:
    pair<int, int> isBalancedFast(Node *root){
        // Base case
        if (root == NULL)
        {
            pair<bool, int> p =make_pair(true, 0);
            return p;
        }

        pair<int , int> left = isBalancedFast(root-> left);
        pair<int , int> right = isBalancedFast(root-> right);

        bool leftAns = left.first;
        bool rightAns = right.first;


        bool diff = abs(left.second - right.second)) <= 1;
        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1;

        if (leftAns && rightAns && diff)
        {
            ans.first = true;
        }
        else{
            ans.first = false;
        }
        return ans;
    }

    bool isBalanced(Node *root)
    {
        return isBalancedFast(root).first;
    }
};
*/