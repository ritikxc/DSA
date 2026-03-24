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

    void dfs(TreeNode* root,int val,int depth, int currD){

        if(!root) return;

        if(currD == depth-1){
            TreeNode* leftn = new TreeNode(val);
            TreeNode* rightn = new TreeNode(val);

            leftn->left = root->left;
            rightn->right = root->right;

            root->left = leftn;
            root->right = rightn;
            return;
        }
        dfs(root->left,val,depth,currD+1);
        dfs(root->right,val,depth,currD+1); 
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {

        if(depth == 1){
            TreeNode* newR = new TreeNode(val);
            newR->left = root;
            return newR;
        }
        dfs(root,val,depth,1);
        return root;
    }
};