class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>m;
        for(int i=0;i<list1.size();i++){
            m[list1[i]]=i;
        }
        int mi=INT_MAX;
        unordered_map<string,int> m1;
        for(int j=0;j<list2.size();j++){
            if(m.find(list2[j])!=m.end()){
                mi=min(mi,m[list2[j]]+j);
                m1[list2[j]]=m[list2[j]]+j;
            }
        }
        vector<string> v;
        for(auto l:m1){
            if(l.second==mi){
                v.push_back(l.first);
            }
        }
        return v;

    }
};