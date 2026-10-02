class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==nullptr||head->next==nullptr){
            return true;}
        ListNode*p=head;
        ListNode*q=head;
        while(q&&q->next){
            q=q->next->next;
            p=p->next;
        }
        ListNode*r=p;
        ListNode*i=nullptr;
        while(r){
            ListNode*next=r->next;
            r->next=i;
            i=r;
            r=next;
        }
        ListNode*u=head;
        ListNode*y=i;
        while(y){
            if(u->val!=y->val){
                return false;
            }
            u=u->next;
            y=y->next;}
        return true;
    }
};
