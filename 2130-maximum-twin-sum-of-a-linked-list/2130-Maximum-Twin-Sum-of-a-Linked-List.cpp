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
    int pairSum(ListNode* head) {
        ListNode*f=head;
        ListNode*s=head;
        while(f&&f->next){
            f=f->next->next;
            s=s->next;
        }
        ListNode*p=s;
        ListNode*q=nullptr;
        while(p){
            ListNode*t=p->next;
            p->next=q;
            q=p;
            p=t;
        }
        int m=0;
        while(head&&q){
            int sum=(head->val+q->val);
            m=max(m,sum);
            head=head->next;
            q=q->next;
        }
        return m;
    }
};