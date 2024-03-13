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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp =nullptr;
        for(int i=0;i<n;i++){
            if(!slow->next){
                if(i==(n-1)){
                    temp=head;
                    head=head->next;;
                }
                return head;
            }
            slow=slow->next;
        }
        
        while(slow->next){
            fast=fast->next;
            slow=slow->next;
        }
       temp = fast->next;
        fast->next = fast->next->next;
        //free(temp);
       
        
        return head;
    }
};