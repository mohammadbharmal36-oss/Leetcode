class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> p;
        string s;
        for(int i=0;i<n;i++){
            s.push_back('.');
        }
        p.push_back(s);
        s="";
        for(int i=0;i<n-1;i++){
            s.push_back('#');
        }
        s.push_back('.');
        for(int i=0;i<m-1;i++){
            p.push_back(s);
        }
        return p;
    }
};