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
    ListNode* swapNodes(ListNode* head, int k) {
        int c=0;
        ListNode*p=head;
        while(p){
            c++;
            p=p->next;
        }
        int x=c-k;
        ListNode*t=head;
        for(int i=0;i<k-1;i++){
            t=t->next;
        }
        ListNode*u=head;
        for(int i=0;i<x;i++){
            u=u->next;
        }
        int j=t->val;
        int b=u->val;
        t->val=b;
        u->val=j;
        return head;
    }
};