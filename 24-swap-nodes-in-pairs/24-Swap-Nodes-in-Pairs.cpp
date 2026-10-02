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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode* p=head;
        ListNode*y=p->next;
        ListNode*i=nullptr;
        while(p&&p->next){
            y=p->next;
            p->next=y->next;
            y->next=p;
            if(i){
                i->next=y;
            }
            else{
                head=y;
            }
            i=p;
            p=p->next;
        }
        return head;
    }
};