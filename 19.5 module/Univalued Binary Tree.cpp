class Solution {
public:
    bool flag=true;
    bool isUnivalTree(TreeNode* root) 
    {
        queue<TreeNode* >q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* bn=q.front();
            q.pop();

            if(root->val!=bn->val)
                flag=false;
            
            if(bn->left) q.push(bn->left);
            if(bn->right) q.push(bn->right);
            
        }
        return flag;
    }
};