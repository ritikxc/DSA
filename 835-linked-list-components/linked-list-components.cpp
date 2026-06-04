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
    int numComponents(ListNode* head, vector<int>& nums) {

        unordered_set<int> st(nums.begin(), nums.end());
        ListNode* curr = head;
        int count = 0;
        while(curr){
            if(st.count(curr->val) && (curr->next==NULL || !st.count(curr->next->val))) count++;

            curr = curr->next;
        }
        return count;
    }
};