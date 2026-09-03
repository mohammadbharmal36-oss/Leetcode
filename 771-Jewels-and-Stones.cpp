class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> m;
        for(auto v:jewels){
            m[v]=0;
        }
        for(auto j:stones){
            if(m.find(j)!=m.end()){
                m[j]++;
            }
        }
        int sum=0;
        for(auto it:m){
            sum=sum+it.second;
        }
        return sum;
    }
};