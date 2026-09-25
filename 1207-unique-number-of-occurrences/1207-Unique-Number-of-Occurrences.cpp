class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> v(2001,0);
        for(auto l:arr){
            v[l+1000]++;
        }
        vector<int> p;
        for(auto k:v){
            if(k!=0){
                p.push_back(k);
            }
        }
        sort(p.begin(),p.end());
        int x=p.size();
        auto it=unique(p.begin(),p.end());
        p.erase(it,p.end());
        if(x==p.size()){
            return true;
        }
        else{
            return false;
        }
    }
};