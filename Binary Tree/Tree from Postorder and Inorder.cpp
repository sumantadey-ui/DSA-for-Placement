// .................GFG...............


/*
void createMapping(int in[], map<int, int> &nodeToIndex, int n)
{
    for (int i = 0; i < n; i++)
    {
        nodeToIndex[in[i]] = i;
    }
}

Node *solve(int in[], int post[], int &preOrderIndex, int inOrderStart, int inOrderEnd, int n, map<int, int> &nodeToIndex)
{

    // Base case
    if (postOrderIndex < 0 || inOrderStart > inOrderEnd)
    {
        return NULL;
    }

    // Create a root node for element
    int element = post[preOrderIndex--];
    Node *root = new Node(element);

    // find elements index in inorder

    int position = nodeToIndex[element];

    // Recursive call
    root->right = solve(in, post, preOrderIndex, position + 1, inOrderEnd, n, nodeToIndex);
    root->left = solve(in, post, preOrderIndex, inOrderStart, position - 1, n, nodeToIndex);

    return root;
}

Node *buildTree(int in[], int post[], int n)
{

    int postOrderIndex = n - 1;
    map<int, int> nodeToIndex;

    // crete node to index mapping
    createMapping(in, nodeToIndex, n);

    Node *ans = solve(in, post, postOrderIndex, 0, n - 1, n, nodeToIndex);
    return ans;
}

*/