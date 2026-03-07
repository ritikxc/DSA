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
    ListNode* swapNodes(ListNode* head, int k) {

        ListNode* left = head;
        ListNode* right = head;
        ListNode* first = head;

        int c = 1;
        while(c<k){
            first = first->next;
            c++;
        }
        right = first;
        while(right->next!=NULL){
            left = left->next;
            right = right->next;
        }
        swap(first->val, left->val);
        return head;
    }
};