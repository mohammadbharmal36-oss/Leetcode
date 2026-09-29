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
        ListNode* m1=l1;
        while(m1){
            v1.push_back(m1->val);
            m1=m1->next;
        }
        ListNode*m2=l2;
        while(m2){
            v2.push_back(m2->val);
            m2=m2->next;
        }
        vector<int> v3;
        int carry=0;
        for(int i=0;i<max(v1.size(),v2.size());i++){
            int sum=carry;
            if(i<v1.size()){
                sum+=v1[i];}
            if(i<v2.size()){
                sum+=v2[i];}
            v3.push_back(sum%10);
            carry=sum/10;
        }
         if(carry){
            v3.push_back(carry);
        }
        ListNode*head=new ListNode(v3[0]);
        ListNode*m11= head;
        for(int i=1;i<v3.size();i++){
            ListNode* t=new ListNode(v3[i]);
            m11->next=t;
            m11=t;
        }
        return head;
    }
};