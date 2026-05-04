/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool valid(struct TreeNode* node, long min, long max) {
    if(node == NULL){
        return true;
    }
    if(node->val<=min || node->val>=max){
        return false;
    }
    return valid(node->left, min, node->val) && valid(node->right, node->val, max);
}
bool isValidBST(struct TreeNode* root) {
    return valid(root, LONG_MIN, LONG_MAX);
}
