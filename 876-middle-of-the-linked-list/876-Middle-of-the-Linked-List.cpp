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
    ListNode* middleNode(ListNode* head) {
        vector<int> v;
        ListNode* p = head;

        while(p){
            v.push_back(p->val);
            p = p->next;
        }

        int mid = v.size()/2;

        p = head;
        for(int i=0; i<mid; i++){
            p = p->next;
        }

        return p;
    }
};