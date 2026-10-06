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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==nullptr||head->next==nullptr){
            return head;}
        ListNode*p=head;
        ListNode*q=p->next;
        while(q){
            ListNode*t=new ListNode(gcd(p->val,q->val));
            t->next=q;
            p->next=t;
            p=q;
            q=q->next;
        }
        return head;
    }
};