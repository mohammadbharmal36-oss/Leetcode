class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
    int n=heights.size();
    vector<int> nse(n,n);
    vector<int> pse(n,-1);
    vector<int> v;
    int a=0;
    int m=0;
    for(int i=0;i<n;i++){
        while(!v.empty()&&heights[v.back()]>=heights[i]){
        v.pop_back();}
        if(!v.empty()){
        pse[i]=v.back();
        }
        v.push_back(i);
    }
    v.clear();
    for(int i=n-1;i>=0;i--){
        while(!v.empty()&&heights[v.back()]>=heights[i]){
        v.pop_back();
        }
        if(!v.empty()){
        nse[i]=v.back();
        }
        v.push_back(i);

    }
    for(int i=0;i<n;i++){
        a=(heights[i])*(nse[i]-pse[i]-1);
        m=max(m,a);
    }
    return m;

    }
};