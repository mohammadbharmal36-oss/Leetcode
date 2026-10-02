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
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int> v;
        ListNode*p=head;
        while(p){
            v.push_back(p->val);
            p=p->next;
        }
        if(v.empty()){
            return nullptr;
        }
        k=k%v.size();
        reverse(v.begin(),v.end());
        reverse(v.begin(),v.begin()+k);
        reverse(v.begin()+k,v.end());
        ListNode*h=new ListNode(v[0]);
        ListNode*e=h;
        for(int i=1;i<v.size();i++){
            ListNode*t=new ListNode(v[i]);
            e->next=t;
            e=t;
        }
        return h;
    }
};