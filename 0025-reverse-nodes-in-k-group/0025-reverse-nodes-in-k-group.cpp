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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k<=1 || !head) return head;
        
        ListNode* curr=head;
        ListNode* prev = nullptr;
        int n = 0;
        ListNode* temp = head;
        
        while(temp){
            temp = temp->next;
            n++;
        }
        cout<<"n"<<n<<endl;
        while(n>=k){
            ListNode* l1 = prev;
            ListNode* l2 = curr;
            
            ListNode* next = nullptr;
            for(int i=0;curr && i<k;i++){
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
            
            if(!curr) break;
            
            prev = l2 ;
            n = n-k;
        }
        return head;
    }
};