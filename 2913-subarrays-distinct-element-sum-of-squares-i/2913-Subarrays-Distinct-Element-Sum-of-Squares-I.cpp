
class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        vector<int> freq(100001,0);
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=i;j<n;j++){
                if(freq[nums[j]]==0){
                    count++;
                }
                freq[nums[j]]++;
                sum+=1LL*count*count;
            }

            for(int j=i;j<n;j++){
                freq[nums[j]]=0;
            }
        }
        return sum;
    }
};

