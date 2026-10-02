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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> f(20001,0);
        for(auto l:lists){
            ListNode*p=l;
            while(p){
                f[p->val+10000]++;
                p=p->next;
            }
        }
        vector<int> v;
        for(int i=0;i<f.size();i++){
            while(f[i]>0){
                v.push_back(i-10000);
                f[i]--;
            }
        }
        if(v.empty())
            return nullptr;
        ListNode*q=new ListNode(v[0]);
        ListNode*r=q;
        for(int i=1;i<v.size();i++){
           ListNode*o=new ListNode(v[i]);
           r->next=o;
           r=o;  }
        return q;
    }
};