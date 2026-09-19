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
        
        int size = 0;
        ListNode* curr = head;
        while(curr!=NULL){
            size++;
            curr = curr->next;
        }
        int target = size-n;

        if(target == 0){
            ListNode* newHead = head->next;
            return newHead;
        }
        curr = head;
        int count = 0;

        while(curr!=NULL){
            if(count == target-1){
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                break;
            }
            count++;
            curr = curr->next;
        }
        return head;
    }
};