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
    ListNode* rotateRight(ListNode* head, int k) {
        int size = 1;
        ListNode* curr = head;
        if(!head) return head;
        while(curr->next){
            curr = curr->next;
            size++;
        }
        curr->next = head;
        
        int i = size - (k%size);
        
        while(i>1) {
            head = head->next;
            i--;
        }
        
        curr = head->next;
        head->next = nullptr;
        
        return curr;
        
    }
};