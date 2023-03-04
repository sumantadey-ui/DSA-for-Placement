// .....................GFG.........
/*
class Solution
{

public:
    void createMapping(int in[], map<int, int> &nodeToIndex, int n)
    {
        for (int i = 0; i < n; i++)
        {
           nodeToIndex[in[i]] =i;
        }
    }

    Node *solve(int in[], int pre[], int &preOrderIndex, int inOrderStart, int inOrderEnd, int n, map<int, int> &nodeToIndex)
    {

        // Base case
        if (preOrderIndex >= n || inOrderStart > inOrderEnd)
        {
            return NULL;
        }

        // Create a root node for element
        int element = pre[preOrderIndex++];
        Node *root = new Node(element);

        // find elements index in inorder

        int position = nodeToIndex[element];
        
        // Recursive call
        root->left = solve(in, pre, preOrderIndex, inOrderStart, position - 1, n, nodeToIndex);
        root->right = solve(in, pre, preOrderIndex, position + 1, inOrderEnd, n, nodeToIndex);

        return root;
    }

    Node *buildTree(int in[], int pre[], int n)
    {

        int preOrderIndex = 0;
        map<int, int> nodeToIndex;

        //crete node to index mapping
        createMapping(in, nodeToIndex, n);

        Node *ans = solve(in, pre, preOrderIndex, 0, n - 1, n, nodeToIndex);
        return ans;
    }
};

*/