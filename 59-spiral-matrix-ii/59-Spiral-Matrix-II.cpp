class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<int> v(n,0);
        vector<vector<int>> f(n,v);
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=n-1;
        int k=1;
        while(top<=bottom&&left<=right){
            for(int i=left;i<=right;i++){
                f[top][i]=k;
                k++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                f[i][right]=k;
                k++;
            }
            right--;
            if(left<=right){
                for(int i=right;i>=left;i--){
                  f[bottom][i]=k;
                  k++;
                }
                bottom--;
            }
            if(top<=bottom){
                for(int i=bottom;i>=top;i--){
                    f[i][left]=k;
                    k++;
                }
                left++;

            }
        }
        return f;
    }
};