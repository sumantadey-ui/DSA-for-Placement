// Code Studio 5 

/*

void inorder(BinaryTreeNode<int> *root, int count){
    // base case
    if(root == NULL){
        return;
    }

    inorder(root->left);
    if(root->left == NULL && root->right == NULL){
        count++;
    }
    inorder(root->right);
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    int count =0;
    inorder(root, count);
    return count;
}

*/