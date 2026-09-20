class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int sum=0;
        vector<int> v(num_people,0);
        int x=1;
        while(sum,candies){
            for(int i=0;i<num_people;i++){
                if(candies-sum<x){
                    v[i]+=candies-sum;
                    return v;
                }
                v[i]=v[i]+x;
                sum=sum+x;
                x++;
            }
        }
        
        return v;
    }
};