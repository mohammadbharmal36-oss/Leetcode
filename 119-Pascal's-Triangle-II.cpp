class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v;
        long long x=1;
        for(int i=0;i<=rowIndex;i++) {
            v.push_back(x);
            x = x*(rowIndex-i)/(i+1);
        }
        return v;
    }
};
        
 