/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getDifference(ListNode *head1,ListNode *head2){
        int len1=0,len2=0;
        
        while(head1!= NULL || head2!=NULL){
            if(head1!=NULL){
                ++len1;
                head1 = head1->next;
            }
            if(head2!=NULL){
                ++len2;
                head2 = head2->next;
            }
        }
        return len1-len2;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       ListNode* d1 = headA;
        ListNode* d2 = headB;
        
        while(d1!=d2){
            d1 = d1 == NULL ? headB: d1->next;
            d2 = d2 == NULL ? headA: d2->next;
        }
        
        return d1;
    }
};