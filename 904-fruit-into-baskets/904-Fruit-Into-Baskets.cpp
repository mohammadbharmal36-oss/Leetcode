class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        vector<int> f(100001,0);
        int i=0;
        int m=0;
        int t=0;
        for(int r=0;r<fruits.size();r++){
            if(f[fruits[r]]==0){
                t++;
            }
            f[fruits[r]]++;
            while(t>2){
                f[fruits[i]]--;
                if(f[fruits[i]]==0){
                    t--;
                }
                i++;
            }
            m=max(m,r-i+1);
        }
        return m;     
    }
};