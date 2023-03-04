// ..............Code studio 1............
/*
int solve(BinaryTreeNode<int> *root, int &i, int k)
{
    // base case
    if (root == NULL)
    {
        return -1;
    }

    // left
    int left = solve(root->left, i, k);

    if (left != NULL)
    {
        return left;
    }

    // N
    i++;
    if (i == k)
    {
        return root->data;
    }

    // R
    return solve(root->right, i, k);
}

int kthSmallest(BinaryTreeNode<int> *root, int k)
{   
    int i = 0;
    return solve(root, i, k)
}

*/

// for kth largest n-k+1