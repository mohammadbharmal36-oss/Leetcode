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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int> v;
        ListNode* p=head;
        while(p){
            v.push_back(p->val);
            p=p->next;
        }
        if(v.size()==1){
            return nullptr;
        }
        v.erase(v.begin()+v.size()-n);
        ListNode* d=new ListNode(v[0]);
        ListNode*t=d;
        for(int i=1;i<v.size();i++){
            ListNode* te=new ListNode(v[i]);
            t->next=te;
            t=te;
        }
        return d;
    }
};