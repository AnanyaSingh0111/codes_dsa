class Solution {
public:
    int numberOfChild(int n, int k) {
        int pos=0;
        int direc=1;
        for(int i=0;i<k;i++){
            pos+=direc;
            if(pos==n-1 || pos==0)
            direc*=-1;
        }
        return pos;
    }
};