class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        string p=s+s;
        if(p.find(goal)!=-1){
            return true;
        }
        else{
            return false;
        }
        
    }
};