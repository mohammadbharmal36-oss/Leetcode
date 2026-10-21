class Solution {
public:
    vector<int> countBits(int n) {
        int i=0;
        vector<int> v;
        while(i<=n){
            int c=0;
            int x=i;
            while(x!=0){
                x&=(x-1);
                c++;
            }
            v.push_back(c);
            i++;
        }
        return v;
    }
};