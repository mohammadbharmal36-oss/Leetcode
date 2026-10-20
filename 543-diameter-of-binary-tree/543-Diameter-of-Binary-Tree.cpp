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
    int a=0;
    int lenght(TreeNode*r){
        if(r==NULL){
            return 0;
        }
        int l=lenght(r->left);
        int t=lenght(r->right);
        a=max(a,l+t);
        return 1+max(l,t);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        lenght(root);
        return a;
    }
};