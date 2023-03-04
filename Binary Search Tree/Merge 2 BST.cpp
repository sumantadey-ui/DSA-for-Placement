// .............Codestudio 3 .............



// approach 1

void inorder(TreeNode<int> *root, vector<int> &in){
    // base case
    if(root == NULL){
        return;
    }

    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}
vector<int>mergeArrays(vector<int> &a, vector<int> &b){

    vector<int> ans(a.size() + b.size());
    int i =0, j=0;
    int k =0;
    while(i <a.size() && j< b.size()){
        if(a[i] < b[j]){
            a[k++] = a[i];
            i++;
        }
        else{
            ans[k++] = b[j];
            j++;
        }

    }

    while (i<a.size())
    {
        ans[k++] = a[i];
        i++;
    }
    while (j<b.size())
    {
        ans[k++] = a[j];
        j++;
    }

    return ans;    

}

void convertIntoSortedDLL(TreeNode<int> *root, TreeNode<int> &head){

    // Base case
    if(root == NULL){
        return NULL;
    }

    convertIntoSortedDLL(root->right, head);

    root->right = head;
    
    if(head != NULL){
        khead->left = root;
    }

    head = root;

    convertIntoSortedDLL(root->left, head);

}

TreeNode<int> mergeLinkedList(TreeNode<int> *head1, TreeNode<int> *head2){

    TreeNode<int> *head = NULL;
    TreeNode<int> *tail = NULL;

    while( head1 != NULL &&  head2 != NULL){
        if(head1->data < head2->data){
            if(head == NULL){
                head = head1;
                tail = head1;
                head1 = head1->right;
            }
            else{
                tail -> right = head1;
                head1 -> left = tail;
                tail = head1;
                head1 = head1->right;
            }
        }
        else{
            if(head == NULL){
                head = head2;
                tail = head2;
                head2 = head1->right;
            }
            else{
                tail -> right = head2;
                head2 -> left = tail;
                tail = head2;
                head2 = head2->right;
            }
        }
    }

    while(head1 != NULL){
        tail -> right = head1;
        head1 -> left = tail;
        tail = head1;
        head1 = head1->right;
    }

    while(head2 != NULL){
        tail -> right = head2;
        head2 -> left = tail;
        tail = head2;
        head2 = head2->right;
    }

}

TreeNode<int>* inorderToBST(int s, int e, vector<int> &inorderVal){
    //base case
    if(s>e){
        return NULL;
    }

    int mid = (s+e)/2;
    TreeNode<int>* root = new TreeNode<int>(inorderVal[mid]);
    root->left = inorderToBST(s, mid-1, inorderVal);
    root->right = inorderToBST(mid+1, e, inorderVal);

    return root;

}


int countNodes(TreeNode<int> *head){
    int cnt = 0;
    TreeNode<int> *temp = head;

    while ( temp != NULL)
    {
        cnt ++;
        temp = temp->right;
    }
    return cnt;
    
}


TreeNode<int> *sortedLLToBST(TreeNode<int> *head, int n){
    // base case
    if(n <= 0 || head == NULL){
        return NULL;
    }

    TreeNode<int> *left = sortedLLToBST(head, n/2);

    TreeNode<int> *root = head;
    root-> left = left;

    head = head ->left;

    root->right = sortedLLToBST(head, n-n/2-1);
    return root;


}


TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    /*
    // approach 1
    // step 1: store inorder----
    vector<int> bst1, bst2;
    inorder(root1, bst1);
    inorder(root2, bst2);

    // step 2: merge both sorted array
    vector<int> mergeArray = mergeArrays(bst1, bst2);

    //step 3: use merged inoreder array to build bst
    int s =0, e = mergeArray.size() - 1;
    return inorderToBST(s, e, mergeArray);

    */

   // approach 2
   //Step 1: convert BST into sorted DLL

    TreeNode<int> *head1 = NULL;
    convertIntoSortedDLL(root1, head1);
    head1->left = NULL;


    TreeNode<int> *head2 = NULL;
    convertIntoSortedDLL(root2, head2);
    head2->left = NULL;

    //Step2: merge sorted linked list
    TreeNode<int> *head = mergeLinkedList(head1, head2);

    // step3: convert sorted LL to BST 
    return sortedLLToBST(head, countNodes(head));




}

