/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev=nullptr;
        while(head){
            ListNode* next=head->next;
            head->next=prev;
            prev=head;;
            head=next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if(!head || !head->next)return;
        
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* sh = reverse(slow);
        
        ListNode* s= head;
        
        while(s && sh){
            ListNode* temp = s->next;
            s->next = sh;
            s = temp;
            
            temp = sh->next;
            sh->next = s;
            sh = temp;
        }
        if(s!=nullptr){
            s->next=nullptr;
        }
        
    }
};