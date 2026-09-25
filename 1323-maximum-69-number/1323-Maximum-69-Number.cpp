class Solution {
public:
    int maximum69Number (int num) {
        vector<int> v;
        while(num!=0){
            int digit=num%10;
            v.insert(v.begin(),digit);
            num=num/10;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==6){
                v[i]=9;
                break;
            }
        }
        int neww=0;
        for(auto l:v){
            neww=neww*10+l;
        }
        return neww;
    }
};