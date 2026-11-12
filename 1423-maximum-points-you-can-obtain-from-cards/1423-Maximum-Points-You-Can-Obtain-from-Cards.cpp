class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int si=cardPoints.size();
        int n=accumulate(cardPoints.begin(),cardPoints.begin()+k,0);
        int j=n;
        int l=k-1;
        int r=si-1;
        while(l>=0){
            n-=cardPoints[l];
            n+=cardPoints[r];
            l--;
            r--;
            j=max(j,n);
        }
        return j;
    }
};