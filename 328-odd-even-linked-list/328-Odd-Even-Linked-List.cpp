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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode*e=head;
        ListNode*p=e;
        ListNode*o=head->next;
        ListNode*q=o;
        while(o && o->next){
            e->next=o->next;
            e=e->next;
            o->next=e->next;
            o=o->next;
        }
        e->next=q;
        return p;

    }
};