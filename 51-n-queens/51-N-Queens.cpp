class Solution {
public:
    bool issafe(int r,int co,vector<string> &d,int n){
        int x=r;
        int y=co;
        while(r>=0&&co>=0){
            if(d[r][co]=='Q'){
                return false;
            }
            r--;
            co--;
        }
        r=x;
        co=y;
        while(co>=0){
            if(d[r][co]=='Q'){
                return false;
            }
            co--;
        }
        co=y;
        while(r<n&&co>=0){
            if(d[r][co]=='Q'){
                return false;
            }
            r++;
            co--;
        }
        return true;
    }
    void qu(int c,vector<vector<string>>&a,vector<string>&d,int n){
        if(c==n){
            a.push_back(d);
            return;
        }
        for(int i=0;i<n;i++){
            if(issafe(i,c,d,n)){
                d[i][c]='Q';
                qu(c+1,a,d,n);
                d[i][c]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> a;
        vector<string> d(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            d[i]=s;
        }
        qu(0,a,d,n);
        return a;
    }
};