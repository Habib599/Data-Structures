void level_order(BinaryTreeNode<int> *root, vector<int>& v) {
    if (root == nullptr) {
        return;
    }

    queue<BinaryTreeNode<int>*> q;
    q.push(root);

    while (!q.empty()) {
        // 1. Remove from queue
        BinaryTreeNode<int> *f = q.front();
        q.pop();

        // 2. Process current node
        v.push_back(f->val);

        // 3. Add children to queue
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

vector<int> getLevelOrder(BinaryTreeNode<int> *root) {
    //  Write your code here.
    vector<int> v;
    level_order(root, v);
    return v;
}