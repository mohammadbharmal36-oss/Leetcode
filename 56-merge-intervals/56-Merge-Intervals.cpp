class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
     sort(intervals.begin(),intervals.end());
     int n=intervals.size();
     vector<vector<int>> f;
     for(int i=0;i<n;i++){
        if(i<n-1&&intervals[i][1]>=intervals[i+1][0]){
            vector<int> v={intervals[i][0],intervals[i][1]};
            while(i<n-1&&v[1]>=intervals[i+1][0]){
                v[0]=min(v[0],intervals[i+1][0]);
                v[1]=max(v[1],intervals[i+1][1]);
                i++;
            }
            f.push_back(v);
        }
        else{
            f.push_back(intervals[i]);
        }
     }
     return f;
    }
};