/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int total_nodes=1;
    struct ListNode* p=head;
    while(p->next!=NULL){
        total_nodes++;
        p=p->next;
    }
    if (total_nodes == n) {
        struct ListNode* temp = head;
        head = head->next; 
        free(temp); 
        return head;
    }
    p=head;
    int i=total_nodes-n;
    while(i>1){
        p=p->next;
        i--;
    }

    struct ListNode* temp;
    temp= p->next;
    p->next=temp->next;
    free(temp);
    return head;
}
