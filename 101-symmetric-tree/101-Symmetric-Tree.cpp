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
    void inorder(TreeNode*p,vector<int> &v,int x){
        if(p==NULL){
            v.push_back(-404);
            return;
        }
        v.push_back(p->val);
        if(x==1){
        inorder(p->left,v,x);
        inorder(p->right,v,x);
        }
        else{
            inorder(p->right,v,x);
            inorder(p->left,v,x);
        }
    }
    bool isSymmetric(TreeNode* root) {
        vector<int> vl;
        vector<int> vr;
        inorder(root->left,vl,1);
        inorder(root->right,vr,2);
        return vl==vr;

    }
};