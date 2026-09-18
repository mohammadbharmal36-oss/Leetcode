class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        if(points.size()<=2){
            return points.size();
        }
        int ans=0;
        for(int i=0;i<points.size();i++){
            map<pair<int,int>,int> m;
            for(int j=i+1;j<points.size();j++){
            int x=points[j][0]-points[i][0];
            int y=points[j][1]-points[i][1];
            int g=gcd(abs(x),abs(y));
            x=x/g;
            y=y/g;
            if(x<0){
                x=-x;
                y=-y;}
            if(x==0){
                y=1;}
            m[{x,y}]++;
            ans=max(ans,m[{x,y}]+1);}
        }
        return ans;
    }
};