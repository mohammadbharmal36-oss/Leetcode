class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> p;
        vector<int> v;
        int x=1;
        for(int i=0;i<target.size();i++){
            while(x<target[i]){
                p.push_back("Push");
                p.push_back("Pop");
                x++;
            }
            p.push_back("Push");
            v.push_back(x);
            x++;
        }
        return p;
    }
};