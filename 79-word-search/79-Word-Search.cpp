class Solution {
public:
    bool isfo(int i,int j,int c,vector<vector<char>>&board,string &word){
        int m=board.size();
        int n=board[0].size();
        if(c==word.size()){
            return true;
        }
        char t=board[i][j];
        board[i][j]='#';
        if(i>0 && board[i-1][j]==word[c]){
            if(isfo(i-1,j,c+1,board,word)) return true;
        }
        if(i<m-1&&board[i+1][j]==word[c]){
            if(isfo(i+1,j,c+1,board,word)) return true;
        }
        if(j>0 && board[i][j-1]==word[c]){
            if(isfo(i,j-1,c+1,board,word)) return true;
        }
        if(j<n-1 && board[i][j+1]==word[c]){
            if(isfo(i,j+1,c+1,board,word)) return true;
        }
        board[i][j]=t;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                    if(isfo(i,j,1,board,word))
                        return true;
                }
            }
        }
        return false;
    }
};