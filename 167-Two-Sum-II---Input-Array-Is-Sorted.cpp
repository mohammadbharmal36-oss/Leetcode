class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
     vector<int> v;
     int n=numbers.size();
     int l=0;
     int r=n-1;
     while(l<r){
        int sum=numbers[l]+numbers[r];
        if(sum==target){
            v.push_back(l+1);
            v.push_back(r+1);
            return v;

        }
        else if(sum<target){
            l++;
        }
        else{
            r--;
        }
     }
     return v;
    }
};