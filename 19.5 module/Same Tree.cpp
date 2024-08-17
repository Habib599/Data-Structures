class Solution {
public:
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
         // Both nodes are null, they are the same
        if (p == nullptr && q == nullptr) return true;
        
        // One of the nodes is null, or their values are different
        if (p == nullptr || q == nullptr || p->val != q->val) return false;
        
        // Recursively check the left and right subtrees
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};