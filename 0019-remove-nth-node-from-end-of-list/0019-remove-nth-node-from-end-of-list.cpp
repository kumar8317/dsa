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
        if(!head) return NULL;   

        ListNode* ptr=new ListNode();
        ptr->next=head;
        ListNode* first=ptr;
        ListNode* second=ptr;

        while(n>0){
            first=first->next;
            n--;
        }

        while(first->next){
            first=first->next;
            second=second->next;
        }
        second->next=second->next->next;
        second=first;
        return ptr->next;
    }
};