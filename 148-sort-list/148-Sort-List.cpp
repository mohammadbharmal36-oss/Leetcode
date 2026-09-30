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
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        ListNode* m=head;
        while(m){
            v.push_back(m->val);
            m=m->next;
        }
        if(v.empty()){
            return nullptr;}
        sort(v.begin(),v.end());
        ListNode* j=new ListNode(v[0]);
        ListNode*k=j;
        for(int i=1;i<v.size();i++){
            ListNode*t=new ListNode(v[i]);
            k->next=t;
            k=t;
        }
        return j;
    }
};