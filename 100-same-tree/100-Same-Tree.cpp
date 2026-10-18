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
    void fin(TreeNode*q,vector<int>&v){
        if(q==NULL){
            v.push_back(-999999);
            return;
        }
        v.push_back(q->val);
        fin(q->left,v);
        fin(q->right,v);
    
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> v1;
        vector<int> v2;
        fin(p,v1);
        fin(q,v2);
        return v1==v2;
    }
};