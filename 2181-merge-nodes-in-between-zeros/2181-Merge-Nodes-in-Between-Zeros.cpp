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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*p=head->next;
        ListNode*q=head;
        int sum=0;
        while(p){
            if(p->val==0){
                q->val=sum;
                sum=0;
                if(p->next==nullptr){
                    q->next=nullptr;
                }
                else{
                    q=q->next;
                }
            }
            else{
                sum+=p->val;
            }
            p=p->next;
        }
        return head;
        
        
    }
};