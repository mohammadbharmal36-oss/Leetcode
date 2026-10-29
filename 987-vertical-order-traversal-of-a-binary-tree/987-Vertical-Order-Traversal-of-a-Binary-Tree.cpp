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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> m;
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            TreeNode*t=p.first;
            int x=p.second.first;
            int y=p.second.second;
            m[x][y].insert(t->val);
            if(t->left){
               q.push({t->left,{x-1,y+1}});
            }
            if(t->right){
                q.push({t->right,{x+1,y+1}});
            }
        }
        vector<vector<int>> f;
        for(auto g:m){
            vector<int> ans;
            for(auto l:g.second){
                ans.insert(ans.end(),l.second.begin(),l.second.end());
            }
            f.push_back(ans);
        }
        return f;
    }
};