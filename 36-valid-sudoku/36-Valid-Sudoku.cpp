
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool r[9][9]={};
        bool c[9][9]={};
        bool b[9][9]={};
         for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                     continue;
                }
                int x=board[i][j]-'1';
                int boooo=(i/3)*3+j/3;
                if(r[i][x]||c[j][x]||b[boooo][x]){
                    return false;
                }
                r[i][x]=true;
                c[j][x]=true;
                b[boooo][x]=true;
            }
        }
        return true;
    }
};
