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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int pos = 1;
        int first = -1;
        int last = -1;
        int miniD = INT_MAX;

        ListNode* prev = head;
        ListNode* curr = head->next;

        while(curr && curr->next){
            ListNode* temp = curr->next;
            
            if((curr->val > prev->val && curr->val > temp->val) ||
                (curr->val < prev->val && curr->val < temp->val)){
                    if(first == -1) first = pos;
                    else miniD = min(miniD, pos-last);

                    last = pos;
                }
                prev = curr;
                curr = temp;
                pos++;
        }
        if(first == -1 || first == last) return {-1, -1};

        int maxD = last- first;

        return {miniD, maxD};
    }
};