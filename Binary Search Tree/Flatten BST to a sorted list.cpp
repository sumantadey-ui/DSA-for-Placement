// .............Code studio.....


/*
void inorder(TreeNode<int>* root, vector<int> &in){
    if(root == NULL){
        return;
    }

    inoredr(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

TreeNode<int>* flatten(TreeNode<int>* node){
    vector<int> inorderVal;

    // store inoreder----sorted value
    inorder(root,inorderVal);
    int n = inorderVal.size();

    TreeNode<int>* newRoot = new TreeNode<int>(inorderVal[0]);

    TreeNode<int>* curr = newRoot;

    //second step
    for(int i=1; i<n; i++){
        TreeNode<int>* temp = new TreeNode<int>(inorderVal[i]);

        curr->left = NULL;
        curr->right = temp;
        curr = temp;
    }

    // final step
    curr->left = NULL;
    curr->right= NULL;

    return newRoot;


}

*/