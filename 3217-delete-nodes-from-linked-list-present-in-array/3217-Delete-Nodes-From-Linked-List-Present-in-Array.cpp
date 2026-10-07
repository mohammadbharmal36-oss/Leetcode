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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        vector<int> f(100001,0);
        for(auto l:nums){
            f[l]++;}
        while(head&&f[head->val]){
            head=head->next;
        }
        ListNode*p=head;
        while(p&&p->next){
            if(f[p->next->val]){
                p->next=p->next->next;}
            else{
                p=p->next;
            }
        }
        return head;
    }
};