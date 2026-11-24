class Solution {
public:
    int passThePillow(int n, int time) {
        int pos=1;
        int direc=1;
        for(int i=1;i<=time;i++){
            pos+=direc;
            if(pos==n || pos==1)
            direc*=-1;
        }
        return pos;
    }
};