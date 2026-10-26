class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        multiset<int> s(stones.begin(),stones.end());
        while(s.size()>1){
            auto it=s.rbegin();
            int it1=*it;
            it++;
            int it2=*it;
            s.erase(s.find(it1));
            s.erase(s.find(it2));
            if(it1>it2){
              s.insert(it1-it2);
            }
        }
        if(!s.empty()){
            return *s.begin();}
        else{
            return 0;
        }
    }
};