class Solution {
public:
    string getHint(string secret, string guess) {
        int b=0,c=0;
        vector<int> a(10,0),d(10,0);
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i]){
                b++;}
            else{
                a[secret[i]-'0']++;
                d[guess[i]-'0']++;
            }
        }
        for(int i=0;i<10;i++){
            c+=min(a[i],d[i]);
        }
        return to_string(b)+"A"+to_string(c)+"B";
    }
};