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
    ListNode* removeNodes(ListNode* head) {
        ListNode*p=head;
        ListNode*pr=nullptr;
        while(p){
            ListNode*t=p->next;
            p->next=pr;
            pr=p;
            p=t;
        }
        head=pr;
        p=head;
        while(p&&p->next){
            if(p->val>p->next->val){
                p->next=p->next->next;
            }
            else{
                p=p->next;
            }
        }
        pr = nullptr;
        p = head;
        while(p){
            ListNode*u=p->next;
            p->next=pr;
            pr=p;
            p=u;
        }
        return pr;
    }
};