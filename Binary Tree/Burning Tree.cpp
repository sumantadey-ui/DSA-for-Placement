// .....................GFG..............



/*

class Solution {

  public:

  Node* creatParentMap(Node* root, int target, map<Node*, Node*> &NodeToParent){

    queue<Node*> q;
    q.push(root);
    Node* res = NULL;

    NodeToParent[root] = NULL;

      

    while(!q.empty()){

        Node* front = q.front();

        q.pop();

          

        if(front->data == target){

          res = front;

        

          

        if(front->left){

          NodeToParent[front->left] = front;

          q.push(front->left);

        }

        if(front->right){

          NodeToParent[front->right] = front;

          q.push(front->right);

        }

    }

    return res;

  }

  int burnTree(Node* root, map<Node*, Node*> &NodeToParent){

    map<Node*, bool> visited;

    queue<Node*> q;

      

    q.push(root);

    visited[root] = 1;

      

    int ans = 0;

      

    while(!q.empty()){

          

          

        bool flag = 0;

        int size = q.size();

        for(int i = 0; i < size; i++){

            Node* front = q.front();

            q.pop();

              

            if(front->left && !visited[front->left]){

                flag = 1;

                q.push(front->left);

                visited[front->left] = 1;

            }

              

            if(front->right && !visited[front->right]){

                flag = 1;

                q.push(front->right);

                visited[front->right] = 1;

            }

              

            if(NodeToParent[front] && !visited[NodeToParent[front]]){

                flag = 1;

                q.push(NodeToParent[front]);

                visited[NodeToParent[front]] = 1;

            }

        }

        if(flag == 1){

            ans++;

        }

    }

    return ans;

  }

    int minTime(Node* root, int target) 

    {
        map<Node*, Node*> NodeToParent;
        Node* targetNode = creatParentMap(root, target, NodeToParent);   
        int ans = burnTree(targetNode, NodeToParent);
        return ans;
    }

};






*/


/*
class Solution
{
public:
    // create mapping
    // terurn targer node
    Node *createParentMapping(Node *root, int target, map<Node *, Node *> &nodeToParent)
    {

        Node *result = NULL;
        queue<Node *> q;
        q.push(root);
        nodeToParent[root] = NULL;

        while (!q.empty())
        {
            Node *front = q.front();
            q.pop();

            if (front->data == target)
            {
                result = front;
            }

            if (front->left)
            {
                nodeToParent[front->left] = front;
                q.push(front->left);
            }

            if (front->right)
            {
                nodeToParent[front->right] = front;
                q.push(front->right);
            }
        }
        return result;
    }

    int burnTree(Node *root, map<Node *, Node *> &nodeToParent)
    {

        map<Node *, bool> visited;
        queue<Node *> q;
        q.push(root);
        visited[root] = true;
        int ans = 0;

        while (!q.empty())
        {

            int size = q.size();
            bool flag = 0;
            for (int i = 0; i < size; i++)
            {
                // process neighbour node
                Node *front = q.front();
                q.pop();

                if (front->left && !visited[front->left])
                {
                    flag = 1;
                    q.push(front->left);
                    visited[front->left] = 1;
                }

                if (front->right && !visited[front->right])
                {
                    flag = 1;
                    q.push(front->right);
                    visited[front->right] = 1;
                }

                if (nodeToParent[front] && !visited[nodeToParent[front]])
                {
                    flag = 1;
                    q.push(nodeToParent[front]);
                    visited[nodeToParent] = 1;
                }
            }

            if (flag == 1)
            {
                ans++;
            }
        }

        return ans;
    };

    int minTime(Node *root, int targer)
    {

        // algo--
        // 1) Create nodeToParent Mapping
        // 2) find target nodes
        // 3) Burn the tree in min time

        map<Node *, Node *> nodeToParent;
        Node *targetNode = createParentMapping(root, targer, nodeToParent);
        int ans = burnTree(targetNode, nodeToParent);

        return ans;
    }
};
*/