class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int f = -1;
        int l = 0;
        int r = matrix.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (matrix[mid][0] > target) {
                r = mid - 1;
            }
            else if (matrix[mid][matrix[mid].size() - 1] < target) {
                l = mid + 1;}
            else {
                int x = 0;
                int y = matrix[mid].size() - 1;
                while (x <= y) {
                    int midd = x + (y - x) / 2;
                    if (matrix[mid][midd] == target) {
                        f = 1;
                        break;}
                    else if (matrix[mid][midd] < target) {
                        x = midd + 1;
                    }
                    else {
                        y = midd - 1;}
                }
                if (f == 1){
                    break;}

                
                break;
            }
        }
         return f == 1;
    }
};