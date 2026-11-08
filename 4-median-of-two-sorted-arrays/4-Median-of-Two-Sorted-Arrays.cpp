class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
         int i=0,j=0;
        int c=0;
        int p=0,cu=0;
        while(c<=(n+m)/2){
            p=cu;
            if(i<n&&(j>=m||nums1[i]<=nums2[j])){
                cu=nums1[i];
                i++;
            }
            else{
                cu=nums2[j];
                j++;
            }
            c++;
        }
        if((n+m)%2==0){
            return (p+cu)/2.0;
        }
        return cu;
    }
};