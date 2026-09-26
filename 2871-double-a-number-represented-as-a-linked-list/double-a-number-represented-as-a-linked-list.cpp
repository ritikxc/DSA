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
    ListNode* doubleIt(ListNode* head) {
        
        ListNode* prev = NULL;

        while(head!=NULL){
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        ListNode* curr = prev;
        int carry = 0;
        while(curr!= NULL){
            long long value = curr->val * 2 + carry;
            curr->val = value % 10;
            carry = value / 10;
            curr = curr->next;
        }

        if(carry>0){
            ListNode* NewNode = new ListNode(carry);
            curr = prev;

            while(curr->next != NULL){
                curr = curr->next;
            }
            curr->next = NewNode;
        }
        curr = NULL;

        while(prev!=NULL){
            ListNode* next = prev->next;
            prev->next = curr;
            curr = prev;
            prev = next;
        }
        return curr;
    }
};