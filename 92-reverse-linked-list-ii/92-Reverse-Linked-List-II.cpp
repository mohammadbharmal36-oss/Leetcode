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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> v;
        ListNode* temp=head;
        while(temp){
          v.push_back(temp->val);
          temp=temp->next;
        }
        if(v.empty()){
            return nullptr;
        }
        reverse(v.begin()+left-1,v.begin()+right);
        ListNode* h=new ListNode(v[0]);
        ListNode*mover =h;
        for(int i=1;i<v.size();i++){
            ListNode* t= new ListNode(v[i]);
            mover->next=t;
            mover=t;
        }
        return h;
    }
};
    