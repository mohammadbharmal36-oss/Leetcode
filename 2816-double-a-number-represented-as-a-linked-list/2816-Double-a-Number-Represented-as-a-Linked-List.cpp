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
    ListNode* doubleIt(ListNode* head) {
        ListNode* prev=nullptr;
        ListNode* p=head;
        while(p){
            ListNode* next=p->next;
            p->next=prev;
            prev=p;
            p=next;
        }
        head=prev;
        p=head;
        int c=0;
        while(p){
            int x=p->val*2+c;
            p->val=x%10;
            c=x/10;
             if(p->next==nullptr){
                break;}
            p=p->next;
        }
        if(c){
            p->next=new ListNode(c);
        }
        prev=nullptr;
        p=head;
        while(p){
            ListNode* next=p->next;
            p->next=prev;
            prev=p;
            p=next;
        }
        return prev;
    }
};