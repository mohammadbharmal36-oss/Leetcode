class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(target<matrix[0][0]||target>matrix[matrix.size()-1][matrix[matrix.size()-1].size()-1]){
            return false;
        }
        int i=0;
        int j=matrix.size()-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(matrix[mid][0]>target){
                j=mid-1;
            }
            else if(matrix[mid][matrix[mid].size()-1]<target){
            i=mid+1;
            }
            else{
                int k=0;
                int r=matrix[mid].size()-1;
                while(k<=r){
                    int midd=k+(r-k)/2;
                    if(matrix[mid][midd]>target){
                        r=midd-1;
                    }
                    else if(matrix[mid][midd]==target){
                        return true;
                    }
                    else{
                        k=midd+1;
                    }

                }
                return false;
            }
        }
        return  false;

    }
};