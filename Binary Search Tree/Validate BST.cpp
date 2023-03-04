// ...........Codee studio 6.............
/*


bool isBST(BinaryTreeNode<int> *root, int min, int max)
{
    // base case
    if (root == NULL)
    {
        return true;
    }

    if (root->data >= min && root->data <= max)
    {
        bool left = isBST(root->left, min, root->data);
        bool right = isBST(root->left, root->data, max);
        return left && right;
    }
    else
    {
        return false;
    }
}

bool validateBST(BinaryTreeNode<int> *root)
{
    return isBST(root, INT_MIN, INT_MAX);
}

*/