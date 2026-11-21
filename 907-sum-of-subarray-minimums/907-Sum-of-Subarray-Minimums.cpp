class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int> nse(n,0);
        vector<int> pse(n,0);
        vector<int> v;
        int s=0;
        int mod=1000000007;
        for(int i=n-1;i>=0;i--){
            while(!v.empty()&&arr[v.back()]>=arr[i]){
                v.pop_back();
            }
            if(v.empty()){
                nse[i]=n;
            }
            else{
                nse[i]=v.back();
            }
            v.push_back(i);
        }
        v.clear();
        for(int i=0;i<n;i++){
            while(!v.empty()&&arr[v.back()]>arr[i]){
                v.pop_back();
            }
            if(v.empty()){
                pse[i]=-1;
            }
            else{
                pse[i]=v.back();
            }
            v.push_back(i);
        }
         for(int i=0;i<n;i++){
            int left=i-pse[i];
            int right=nse[i]-i;
            s=(s+(right*left*1LL*arr[i])%mod)%mod;
         }
         return s;
    }
};