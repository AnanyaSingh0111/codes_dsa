class Solution {
public:
    int countSet(int n){
        int count=0;
        while(n>0){
            n=n&(n-1);
            count++;
        }
        return count;
    }
    int calculateScore(int a, int b) {
        int c1=countSet(a);
        int c2=countSet(b);
        if(c1>=c2)
        return c1*c2;
        else
        return c2/c1;
    }
};