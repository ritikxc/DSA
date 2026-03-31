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
    int pairSum(ListNode* head) {

        int sum = 0;
        
        if(head->next->next==NULL){
            return head->val+head->next->val;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev = NULL;
        ListNode* curr = slow;

        while(curr!=NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        ListNode* temp = head;
        while(prev!=NULL){
            sum = max(sum, temp->val+prev->val);
            temp = temp->next;
            prev = prev->next;
        }
        return sum;
    }
};