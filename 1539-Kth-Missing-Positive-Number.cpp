class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count=0;
        for(int i=0;i<arr.size();i++) {
            count=arr[i] - i - 1;
            if(count>= k)
                return i+k;
        }
        return arr.size()+k;
    }
};