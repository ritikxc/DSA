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

        if(head==NULL  || head->next==NULL) return head;

        int count = 0;
        ListNode* temp = head;

        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* before = dummy;
        for(int i=1;i<left;i++){
            before = before->next;
        }

        ListNode* start = before->next;
        ListNode* end = start;
        for(int i=left;i<right;i++){
            end = end->next;
        }
        ListNode* after = end->next;
        end->next = NULL;

        ListNode* reverse = NULL;
        ListNode* curr = start;

        while(curr!=NULL){
            ListNode* next = curr->next;
            curr->next = reverse;
            reverse = curr;
            curr = next;
        }
        before->next = reverse;
        start->next = after;

        return dummy->next;

    }
};