class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        if(need1==need2&&need1==0){
            return 0;
        }
        long long x=(1LL*cost1*need1)+(1LL*cost2*need2);
        long long y=1LL*costBoth*(max(need1,need2));
        long long z=0;
        if(need1>need2){
            z=1LL*costBoth*(need2);
            need1-=need2;
            z+=(1LL*cost1*need1);
        }
        else if(need2>need1){
            z=1LL*costBoth*(need1);
            need2-=need1;
            z+=(1LL*cost2*need2);
        }
        else if(need2==need1){
            z=min({1LL*need1*costBoth,1LL*need1*cost1+1LL*need1*cost2});
        }
        return min({x,y,z});
    }
};