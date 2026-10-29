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
    void levelorder(TreeNode*r,vector<vector<int>> &f){
        if(r==NULL){
            return;}
        queue<TreeNode*> q;
        q.push(r);
        while(!q.empty()){
            vector<int> level;
            int n=q.size();
            for(int i=1;i<=n;i++){
                TreeNode*t=q.front();
                q.pop();
                if(t->left){
                    q.push(t->left);
                }
                if(t->right){
                    q.push(t->right);
                }
               
                level.push_back(t->val);
            }
            f.push_back(level);
        }

    }
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> f;
        levelorder(root,f);
        vector<int> ans;
        for(auto l:f){
            ans.push_back(l.back());
        }
        return ans;
    }
};