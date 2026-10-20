class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1;
        int j=*max_element(piles.begin(),piles.end());
        while(i<=j){
            int mid=i+(j-i)/2;
            long long p=0;
            for(auto l:piles){
                 p+=l/mid;
                if (l%mid!=0) {
                    p++;
                }
            }
            if(p<=h){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return i;
    }
};