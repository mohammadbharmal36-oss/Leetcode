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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        vector<vector<int>> f;
        queue<TreeNode*> q;
        int k=-1;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> l;
            for(int i=0;i<n;i++){
                TreeNode*t=q.front();
                q.pop();
                if(t->left){
                    q.push(t->left);
                }
                if(t->right){
                    q.push(t->right);
                }
                l.push_back(t->val);
            }
            if(k==1){
                reverse(l.begin(),l.end());
            }
            k*=-1;
            f.push_back(l);
        }
        return f;
    }
};