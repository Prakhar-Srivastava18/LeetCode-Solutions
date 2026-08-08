/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes) {
    *returnSize=0;
    if(root==NULL) return NULL;
    int** arr=(int**)malloc(2000*sizeof(int*));
    *returnColumnSizes=(int*)malloc(2000*sizeof(int));
    struct TreeNode* queue[2001];   
    int front=0, rear=0;
    queue[rear++]=root;
    while(front<rear){
        int level=rear-front;
        int* current=malloc(level*sizeof(int));
        for(int i=0;i<level;i++){
            struct TreeNode* temp=queue[front++];
            current[i]=temp->val;
            if(temp->left!=NULL){
                queue[rear++]=temp->left;
            }
            if(temp->right!=NULL){
                queue[rear++]=temp->right;
            }
        }
        (*returnColumnSizes)[*returnSize]=level;
        arr[*returnSize]=current;
        (*returnSize)++;
    }
    return arr;
}
