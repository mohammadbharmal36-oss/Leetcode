class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int m=0;
        vector<int> v;
        for(auto l:s){
            if(l=='('){
                v.push_back(1);
            }
            if(v.size()>m){
                m=v.size();
            }
            else if(l==')'){
                v.pop_back();
            }
        }
        return m;
    }
};