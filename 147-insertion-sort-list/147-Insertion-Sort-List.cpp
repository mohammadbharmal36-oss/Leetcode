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
    ListNode* insertionSortList(ListNode* head) {
        vector<int> f(10001,0);
        ListNode*p=head;
        while(p){
            f[p->val+5000]++;
            p=p->next;
        }
        vector<int> v;
        for(int i=0;i<f.size();i++){
            while(f[i]>0){
                v.push_back(i-5000);
                f[i]--;
            }
        }
        ListNode*q=new ListNode(v[0]);
        ListNode*r=q;
        for(int i=1;i<v.size();i++){
            ListNode*t=new ListNode(v[i]);
            r->next=t;
            r=t;
        }
        return q;
        
    }
};