// ................Code studio 5............
/*

TreeNode<int>* LCAinaBST(TreeNode<int> * root, TreeNode<int>* P, TreeNode<int>* Q){
    //Base case
    if(root == NULL){
        return NULL;
    }

    // Iteretive way
    while(root != NULL){
        if(root->data < P->data && root->data < Q->data){
            root == root->right;
        }
        else if(root->data > P->data && root->data > Q->data){
            root = root->left;
        }
        else 
            return root;
    }


    //recursive way
    
    if(root->data < P->data && root->data < Q->data){
        LCAinaBST(root->right, P, Q);
    }

    if(root->data > P->data && root->data > Q->data){
        LCAinaBST(root->left, P, Q);
    }
    return root;
    

}
*/

