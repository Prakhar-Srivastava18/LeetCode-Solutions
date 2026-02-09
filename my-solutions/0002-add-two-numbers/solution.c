/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {   
    int c=0;
    struct ListNode* head=NULL;
    struct ListNode* current=NULL;
    while(l1!=NULL || l2!=NULL || c!=0){
        int d1=(l1 != NULL) ? l1->val : 0;
        int d2=(l2 != NULL) ? l2->val : 0;
        int sum = (c + d1 + d2)%10;
        c = (c + d1 + d2)/10;
        struct ListNode* temp=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val=sum;
        temp->next=NULL;
        if(head==NULL){
            head=temp;
        }
        else{
            current->next=temp;
        }
        current=temp;
        if(l1 != NULL) l1=l1->next;
        if(l2 != NULL) l2=l2->next;
    }
    return head;
}
