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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int> m;
        ListNode* p=head;
        while(p){
            m[p->val]++;
            p=p->next;
        }
        vector<int> v;
        p = head;
        while (p) {
            if (m[p->val]==1) {
                v.push_back(p->val);
            }
            p = p->next;
        }
        if(v.empty()){
            return nullptr;
        }
        ListNode*y=new ListNode(v[0]);
        ListNode*r=y;
        for(int i=1;i<v.size();i++){
            ListNode*t=new ListNode(v[i]);
            r->next=t;
            r=t;
        }
        return y;

        
    }
};