// .....................GFG...........

/*

class Solution
{

public:
    vector<int> zigZagtraversal(Node *root)
    {
        vector<int> result;
        if (root == NULL)
        {
            return result;
        }

        queue<int> q;
        q.push(root);

        bool leftToright = true;

        while (!q.empty())
        {
            int size = q.size();
            vector<int> ans(size);

            // Level process
            for (int i = 0; i < size; i++)
            {
                Node *frontNode = q.front();
                q.pop();

                // Normal insert or revers insert

                int index = leftToright ? i : size -i- 1;
                ans[index] = frontNode->data;

                if (frontNode->left)
                    q.push(frontNode->left);
                if (frontNode->right)
                    q.push(frontNode->right);
            }
            // direction Change
            leftToright = !leftToright;

            for (auto i : ans)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};



*/