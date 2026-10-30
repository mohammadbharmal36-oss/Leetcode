class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int mi=INT_MAX;
        int l=*max_element(weights.begin(),weights.end());
        int r=accumulate(weights.begin(),weights.end(),0);
        while(l<=r){
            int mid=l+(r-l)/2;
            int d=1;
            int w=0;
            int i=0;
            while(i<weights.size()){
                if((w+weights[i])>mid){
                    w=0;
                    d+=1;
                }
                w+=weights[i];
                i++;
            }
            if(d<=days){
                mi=min(mi,mid);
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return mi;
    }
};