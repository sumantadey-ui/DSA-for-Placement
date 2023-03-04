// ...............................Code studio 4...........

/*

void inorder(BinaryTreeNode<int>* root, vector<int> &in){
    if(root == NULL){
        return;
    }

    inoredr(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}


bool twoSumInBST(BinaryTreeNode<int>* root, int target){
    vector<int> inorderVal;

    // store inoreder----sorted value
    inorder(root,inorderVal);

    //check two pointer approch to check if pair exist
    int i =0, j= inorderVal.size();

    while(i<j){
        int sum = inorderVal[i] + inorderVal[j];

        if(sum == target){
            return true;
        }
        else if(sum > target){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}

*/