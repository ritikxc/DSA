/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        unordered_map<ListNode*,int> freq;
        ListNode* temp1 = headA;

        while(temp1!=NULL){
            freq[temp1]++;
            temp1 = temp1->next;
        }
        ListNode* temp2 = headB;

        while(temp2!=NULL){
            if(freq[temp2]>0) return temp2;
            temp2 = temp2->next;
        }
        return NULL; 
    }
};