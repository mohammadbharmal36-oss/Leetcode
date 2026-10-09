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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>v;
        vector<int> s;
        ListNode*p=head;
        while(p){
            v.push_back(p->val);
            p=p->next;
        }
        vector<int> a(v.size(), 0);
        for(int i=v.size()-1;i>=0;i--){
            if(s.empty()){
                s.push_back(v[i]);
                a[i]=0;
            }
            else if(v[i]<s.back()){
                a[i]=s.back();
                s.push_back(v[i]);
            }
            else {
                while(!s.empty()&&s.back()<=v[i]){
                    s.pop_back();
                }
                if(!s.empty()){
                    a[i]=s.back();
                    s.push_back(v[i]);
                }
                else{
                    a[i]=0;
                    s.push_back(v[i]);
                }
            }
        }
        return a;
    }
};