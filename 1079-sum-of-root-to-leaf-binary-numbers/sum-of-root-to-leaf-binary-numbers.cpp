/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = 0;
    
    void dfs(TreeNode* root, string curr){
        if(!root) return;

        curr += char(root->val + '0');

        if(!root->left && !root->right){
            ans += stoi(curr,NULL,2);
            return;
        }
        dfs(root->left, curr);
        dfs(root->right, curr);
    }
    int sumRootToLeaf(TreeNode* root) {
        dfs(root, "");
        return ans;
    }
};