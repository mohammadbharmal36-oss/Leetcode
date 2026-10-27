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
    void sumoff(TreeNode*r,int &x){
        if(r==NULL){
            return;
        }
        if(r->left&&r->left->left==NULL&&r->left->right==NULL){
            x+=r->left->val;}
        sumoff(r->left,x);
        sumoff(r->right,x);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int x=0;
        sumoff(root,x);
        return x;
    }
};