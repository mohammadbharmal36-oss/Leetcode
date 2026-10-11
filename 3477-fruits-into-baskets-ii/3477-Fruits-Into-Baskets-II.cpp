class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int t=0;
        for(int i=0;i<fruits.size();i++){
            bool f=false;
            for(int j=0;j<baskets.size();j++){
                if(baskets[j]>=fruits[i]){
                    baskets[j]=0;
                    fruits[i]=0;
                    f=true;
                    break;
                }
            }
            if(f==false){
                t++;
            }
        }
        return t;
    }
};