class Solution {
public:
    int countStaircase(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            unordered_map<int,int> f;
            vector<int> v;
            for(int j=i;j<n;j++){
                if(f.find(nums[j])==f.end()){
                    v.push_back(nums[j]);
                }
                f[nums[j]]++;
                bool o=true;
                int k=1;
                for(auto l:v){
                    if(f[l]!=k){
                        o=false;
                        break;
                    }
                    k++;
                }
                if(o){
                    c++;
                }
            }
            
        }
        return c;
    }
};