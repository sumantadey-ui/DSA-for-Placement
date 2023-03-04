#include<iostream>
#include<queue>
using namespace std;

class Node{

    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

Node* insertAtBst(Node* &root, int data){
    // Base case
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(data>root->data){
        //insert at right side
        root->right = insertAtBst(root->right, data);
    }
    else{
        // insert left side
        root->left = insertAtBst(root->left, data);
    }

    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data != -1){
        root = insertAtBst(root, data);
        cin>>data;
    }
}

void levelOrderTrav(Node *root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){// Old level traversal completed
            cout<<endl;
            if(! q.empty()){// queue still have chile node
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        
    }

}

void inorder(Node * root){
    // base case
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node * root){
    // base case
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node * root){
    // base case
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

Node* minVal(Node* root){
    Node* temp = root;
    while(temp ->left != NULL){
        temp = temp->left;
    }
    return temp;
}

Node* maxVal(Node* root){
    Node* temp = root;
    while(temp ->right != NULL){
        temp = temp->right;
    }
    return temp;
}

Node* deleteFromBST(Node* root,int val){
    // base case
    if(root == NULL){
        return root;
    }
    if(root->data == val){
        // 0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        // 1 child
        //-----Left child
        if(root->left != NULL and root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //-----Right Child
        if(root->left == NULL and root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if(root->left != NULL && root->right != NULL){
            int mini = minVal(root->right) -> data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }
    }
    else if(root->data > val){
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else{
        root->right = deleteFromBST(root->right, val);
        return root;
    }

}


int main()
{

    Node* root = NULL;

    cout<<"Enter data for creat BST "<<endl;
    takeInput(root);

    cout<<"Printing the BST "<<endl;
    levelOrderTrav(root);
    cout<<endl;

    cout<<"Printing Inorder traversal "<<endl;
    inorder(root);
    cout<<endl;
    cout<<endl;

    cout<<"Printing Preorder traversal "<<endl;
    preorder(root);
    cout<<endl;
    cout<<endl;

    cout<<"Printing Postorder traversal "<<endl;
    postorder(root);
    cout<<endl;

    cout<<"Min value is "<<minVal(root)<<endl;
    cout<<"Max value is "<<maxVal(root)<<endl;


    // Deletion

    root = deleteFromBST(root, 30);

    cout<<"Printing the Level order BST "<<endl;
    levelOrderTrav(root);
    cout<<endl;

    cout<<"Printing Inorder traversal "<<endl;
    inorder(root);
    cout<<endl;
    cout<<endl;

    cout<<"Printing Preorder traversal "<<endl;
    preorder(root);
    cout<<endl;
    cout<<endl;

    cout<<"Printing Postorder traversal "<<endl;
    postorder(root);
    cout<<endl;

    cout<<"Min value is "<<minVal(root)<<endl;
    cout<<"Max value is "<<maxVal(root)<<endl;

    return 0;
}