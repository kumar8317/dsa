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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right) return head;
        
        ListNode* curr = head;
        ListNode* prev = nullptr;
        
        for(int i=0;i<left-1 && curr ;i++){
            prev = curr;
            curr = curr->next;
        }
        
        ListNode* l1 = prev;
        ListNode* l2 = curr;
        
        ListNode* next = nullptr;
        
        for(int i=0;i<right-left+1 && curr;i++){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        if(l1){
            l1->next = prev;
        }else{
            head = prev;
        }
        l2->next = curr;
        
        return head;
    }
};