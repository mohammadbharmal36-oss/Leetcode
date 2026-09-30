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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> v;
        ListNode* p=head;
        while(p){
            v.push_back(p->val);
            p=p->next;
        }
        for(int i=0;i+k<=v.size();i+=k){
            reverse(v.begin()+i,v.begin()+i+k);
        }
        if(v.empty()){
            return nullptr;
        }
        ListNode* t=new ListNode(v[0]);
        ListNode* q=t;
        for(int i=1;i<v.size();i++){
            ListNode* f=new ListNode(v[i]);
            q->next=f;
            q=f;}
        return t;
    }
};