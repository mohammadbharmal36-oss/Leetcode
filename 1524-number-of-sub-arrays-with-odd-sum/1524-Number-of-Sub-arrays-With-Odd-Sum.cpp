class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
       int o=0;
       int e=1;
       int m=1000000007;
       int c=0;
       int sum=0;
       for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum%2==0){
            c+=o;
            e++;
        }
        else{
            c+=e;
            o++;
        }
        c%=m;
       }
       return c;
    }
};