class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> v;
        vector<string> f;
        for(auto s:score){
            v.push_back(s);
        }
        sort(v.begin(),v.end(),greater<int>());
        for(auto j:score){
            auto it= find(v.begin(),v.end(),j);
            int rank=distance(v.begin(),it);
             if(rank==0){
                f.push_back("Gold Medal");
            }
            else if(rank==1){
                f.push_back("Silver Medal");
            }
            else if(rank==2){
                f.push_back("Bronze Medal");
            }
            else{
                f.push_back(to_string(rank+1));
            }
        } return f;
    }
};