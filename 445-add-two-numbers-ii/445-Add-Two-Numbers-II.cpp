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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> v1;
        vector<int> v2;
        ListNode*j=l1;
        ListNode*u=l2;
        while(j){
            v1.push_back(j->val);
            j=j->next;
        }
        while(u){
            v2.push_back(u->val);
            u=u->next;
        }
        vector<int> an;
        int i=v1.size()-1;
        int h=v2.size()-1;
        int c=0;
        while(i>=0||h>=0||c){
            int sum=c;
            if(i>=0){
                sum+=v1[i--];}
            if(h>=0){
                sum+=v2[h--];}
            an.push_back(sum%10);
            c=sum/10;
        }
        reverse(an.begin(),an.end());
        ListNode*head=new ListNode(an[0]);
        ListNode* p=head;
        for(int i=1;i<an.size();i++){
            p->next=new ListNode(an[i]);
            p=p->next;
        }
        return head;
        
    }
};