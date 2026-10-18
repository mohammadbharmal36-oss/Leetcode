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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        vector<vector<int>> v;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> l;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode*r=q.front();
                q.pop();
                if(r->left){
                    q.push(r->left);
                }
                if(r->right){
                    q.push(r->right);
                }
                l.push_back(r->val);
            }
            v.push_back(l);
        }
        return v;

    }
};