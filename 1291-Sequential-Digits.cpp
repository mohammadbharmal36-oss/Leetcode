class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> v;
        for(int i=1;i<=9;i++){
            int num=0;
            for(int j=i;j<=9;j++){
                num=num*10+j;
                if(num>=low&&num<=high){
                    v.push_back(num);
                }
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};