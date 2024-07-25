void inorder(TreeNode* root, vector<int>& result) 
{
    if (root == nullptr) 
    {
        return;
    }
    inorder(root->left, result);
    result.push_back(root->data);
    inorder(root->right, result);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    
    vector<int> result;
    inorder(root, result);
    return result;
}