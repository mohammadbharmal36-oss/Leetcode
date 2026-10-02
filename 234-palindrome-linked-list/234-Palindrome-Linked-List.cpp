class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode*p=head;
        while(p){
            v.push_back(p->val);
            p = p->next;}
        for(int i=0;i<v.size()/2;i++){
            if(v[i]!=v[v.size()-1-i]){
            return false;}
        }
        return true;
    }
};
