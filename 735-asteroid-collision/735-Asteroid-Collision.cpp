class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> v;
        for(auto l:asteroids){
            while(!v.empty()&&l<0&&v.back()>0&&v.back()<-l){
                v.pop_back();
            }
            if(!v.empty()&&v.back()>0&&l<0&&v.back()==-l){
                v.pop_back();
            }
            else if(v.empty()||l>0||v.back()<0){
                v.push_back(l);
            }
        }
        return v;
    }
};