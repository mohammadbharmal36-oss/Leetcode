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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> v;
        ListNode*m1=list1;
        ListNode*m2=list2;
        while(m1){
            v.push_back(m1->val);
            m1=m1->next;
        }
        while(m2){
            v.push_back(m2->val);
            m2=m2->next;
        }
        if(v.empty()){
            return nullptr;
        }
        sort(v.begin(),v.end());
        ListNode* head1=new ListNode(v[0]);
        ListNode*move=head1;
        for(int i=1;i<v.size();i++){
            ListNode*temp=new ListNode(v[i]);
            move->next=temp;
            move=temp;
        }
        return head1;

    }
};