class Solution {
public:
    int findTilt(TreeNode* root) {
        if (!root) return 0;
        int tilt = 0;
        findTiltHelper(root, tilt);
        return tilt;
    }
    
    int findTiltHelper(TreeNode* root, int& tilt) {

        if (!root) return 0;
        
        int leftSum = findTiltHelper(root->left, tilt);
        int rightSum = findTiltHelper(root->right, tilt);
        
        tilt += abs(leftSum - rightSum);
        
        return leftSum + rightSum + root->val;
    }
};
