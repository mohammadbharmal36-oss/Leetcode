/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        int count =0;
        vector<int> f(10001,0);
        for(auto l:nums){
            f[l]++;
        }
        int m=0;
        while(head){
            if(f[head->val]&&(head->next==nullptr||f[head->next->val]==0)){
                count++;
                m=max(m,count);
            }
            head=head->next;
        }
        return m;
    }
};