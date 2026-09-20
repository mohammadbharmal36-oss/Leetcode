class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> v;
        for(auto l:nums){
            if(l>=10){
                vector<int> k;
                while(l!=0){
                    int digit=l%10;
                    k.insert(k.begin(),digit);
                    l=l/10;
                }
                for(auto m:k){
                    v.push_back(m);
                }
                k.clear();

            }
            else{
                v.push_back(l);
            }
        }
        return v;
    }
};