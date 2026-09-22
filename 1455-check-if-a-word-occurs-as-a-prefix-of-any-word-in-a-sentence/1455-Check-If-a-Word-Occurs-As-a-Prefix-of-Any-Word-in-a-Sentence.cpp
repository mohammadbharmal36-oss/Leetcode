class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int count=1;
        for(int i=0;i<sentence.size();i++){
            if(i==0||sentence[i-1]==' '){
                if(sentence.substr(i,searchWord.size())==searchWord){
                    return count;
                }
                count++;
            }
        }
        return -1;
    }
};