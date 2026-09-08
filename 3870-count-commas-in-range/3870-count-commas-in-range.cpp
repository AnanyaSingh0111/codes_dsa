class Solution {
public:
    int countCommas(int n) {
        int num=n;
        int count=0;
        while(num){
            int rem=num%10;
            count++;
            num/=10;
        }
        if(count<4) 
        return 0;
        return n-1000+1;
    }
};