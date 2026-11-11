
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({score[i],i});
        }
        sort(v.rbegin(),v.rend());
        vector<string> s(n,"");
        for(int i=0;i<n;i++){
            if(i==0) s[v[i].second]="Gold Medal";
            else if(i==1) s[v[i].second]="Silver Medal";
            else if(i==2) s[v[i].second]="Bronze Medal";
            else s[v[i].second]=to_string(i+1);
        }
        return s;
    }
};
