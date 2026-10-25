class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> s;
        for(auto l:arr){
            if(s.find(2*l)!=s.end()){
                return true;}
            if(l%2==0&&s.find(l/2)!=s.end()){
                return true;}
            s.insert(l);
        }
        return false;
    } 
};