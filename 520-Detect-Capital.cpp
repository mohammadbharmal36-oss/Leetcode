class Solution {
public:
    bool detectCapitalUse(string word) {
        int count=0;
        int ans=-1;
        for(auto value:word){
            if(value>='A'&&value<='Z'){
                count++;
            }
        }
        if(count==word.size()||count==0){
            return true;
        }
        else if(count==1&&word[0]>='A'&&word[0]<='Z'){
            return true;
        }
        else{
            return false;
        }
    }
};