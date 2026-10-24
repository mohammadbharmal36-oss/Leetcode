class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> m={31,28,31,30,31,30,31,31,30,31,30,31};

        int m1a=(arriveAlice[0]-'0')*10+arriveAlice[1]-'0';
        int m2a=(arriveBob[0]-'0')*10+arriveBob[1]-'0';
        int m1l=(leaveAlice[0]-'0')*10+leaveAlice[1]-'0';
        int m2l=(leaveBob[0]-'0')*10+leaveBob[1]-'0';

        int d1a=(arriveAlice[3]-'0')*10+arriveAlice[4]-'0';
        int d2a=(arriveBob[3]-'0')*10+arriveBob[4]-'0';
        int d1l=(leaveAlice[3]-'0')*10+leaveAlice[4]-'0';
        int d2l=(leaveBob[3]-'0')*10+leaveBob[4]-'0';

        int a=0,b=0,c=0,d=0;

        for(int i=0;i<m1a-1;i++){
         a+=m[i];
        }
        a+=d1a;

        for(int i=0;i<m1l-1;i++){
         b+=m[i];
        }
        b+=d1l;

        for(int i=0;i<m2a-1;i++){
            c+=m[i];
        }
        c+=d2a;

        for(int i=0;i<m2l-1;i++){
             d+=m[i];
        }
        d+=d2l;

        int start=max(a,c);
        int end=min(b,d);
        if(start>end){
            return 0;
        }
        return end-start+1;
    }
};