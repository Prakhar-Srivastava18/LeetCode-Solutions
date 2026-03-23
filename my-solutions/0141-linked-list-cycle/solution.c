/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head){
    if (head == NULL || head->next == NULL) {
        return false;
    }
    struct ListNode *prev = head;
    struct ListNode *after = head->next;
    while(prev!=after){
        if (after == NULL || after->next == NULL){
            return false; 
        }
        prev = prev->next;       
        after = after->next->next;   
    }
    return true;
}
