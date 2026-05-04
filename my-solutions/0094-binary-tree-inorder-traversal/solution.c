/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int nodes(struct TreeNode* root){
    if(root==NULL){
        return 0;
    }
    return 1+nodes(root->left)+nodes(root->right);
 }
 void helper(struct TreeNode* root, int* arr, int* index){
   
    if(root!=NULL){
        helper(root->left, arr, index);
        arr[*index] = root->val;  
        (*index)++;
        helper(root->right, arr, index);
    }
 }
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = nodes(root);
    if(*returnSize==0){
        return NULL;
    }
    int index = 0;
    int *arr = (int*)malloc((*returnSize)*sizeof(int));
    helper(root,arr,&index);
    return arr;
}
