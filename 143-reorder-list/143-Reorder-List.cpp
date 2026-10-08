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
    void reorderList(ListNode* head) {
        vector<int> v;
        vector<int> r;
        ListNode*p=head->next;
        while(p){
            v.push_back(p->val);
            p=p->next;
        }
        int n=v.size();

        int i=0;
        int j=n-1;

        while(i<=j){
            r.push_back(v[j]);
            if(i!=j){
             r.push_back(v[i]);
            }
            i++;
            j--;
        }
     
        ListNode*q=head;
        r.insert(r.begin(),head->val);
        for(int i=0;i<r.size();i++){
            q->val=r[i];
            q=q->next;
        }

    }
};