class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count=0;
        for(auto l:nums){
            while(l!=0){
                int d=l%10;
                if(d==digit){
                    count++;
                }
                l=l/10;
            }
        }
        return count;
    }
};