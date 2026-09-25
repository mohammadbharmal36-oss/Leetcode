class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int> f(3000,0);
        f[0]=1;
        for(int k=0;k<rooms.size();k++){
        for(int i=0;i<rooms.size();i++){
            if(f[i]!=0){
                for(int j=0;j<rooms[i].size();j++){
                    f[rooms[i][j]]=1;
                }
            }
        }}
        for(int i=0;i<rooms.size();i++){
            if(f[i]==0){
                return false;
            }
        }
        return true;
    }
};