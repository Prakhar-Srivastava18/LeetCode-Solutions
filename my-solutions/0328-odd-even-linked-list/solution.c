/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct ListNode* ptr1=head;
    struct ListNode* ptr2=head->next;
    struct ListNode* temp=ptr2;
    while(ptr2!=NULL && ptr2->next!=NULL){
        ptr1->next=ptr2->next;
        ptr1=ptr1->next;
        ptr2->next=ptr1->next;
        ptr2=ptr2->next;
    }
    ptr1->next=temp;
    return head;
}
