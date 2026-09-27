class Solution {
public:
    int countAsterisks(string s) {
        int f=-1;
        int  count=0;
        for(auto l:s){
            if(l=='|'){
                f*=(-1);
            }
            else if(l=='*'){
                if(f==-1){
                    count++;
                }
            }
        }
        return count;
    }
};