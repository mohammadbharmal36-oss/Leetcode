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
    void postorder(TreeNode*p,vector<int> &v){
        if(p==NULL){
            return;
        }
        postorder(p->left,v);
        postorder(p->right,v);
        v.push_back(p->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
      vector<int> v;
      postorder(root,v);
      return v;        
    }
};