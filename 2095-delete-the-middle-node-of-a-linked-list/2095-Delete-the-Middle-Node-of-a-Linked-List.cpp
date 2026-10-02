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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr||head->next==nullptr){
            return nullptr;}
        ListNode*p=head;
        int count=0;
        while(p){
            count++;
            p=p->next;}
        int x=count/2;
        count=1;
        ListNode*r=head;
        while(r){
            if(count==x){
                r->next=r->next->next;
                break;
            }
            count++;
            r=r->next;
            }
        return head;
    }
};