void preorder(TreeNode<int>* root, vector<int>& result) {
    if (root == nullptr) {
        return;
    }
    result.push_back(root->data);
    preorder(root->left, result);
    preorder(root->right, result);
}
vector<int> preOrder(TreeNode<int> * root){
    
    vector<int> result;
    preorder(root, result);
    return result;
}