class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> v(temperatures.size(),0);
        vector<int> f;
        for(int i=0;i<temperatures.size();i++){
           while(!f.empty()&&temperatures[i]>temperatures[f.back()]){
            int x=f.back();
            f.pop_back();
            v[x]=i-x;
           }
           f.push_back(i);
        }
        return v;
    }
};