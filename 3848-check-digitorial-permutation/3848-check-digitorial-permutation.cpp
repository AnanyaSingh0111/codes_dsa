class Solution {
public:
    int fact(int n){
        if(n==0 || n==1)
        return 1;
        return fact(n-1)*n;
    }
    bool isDigitorialPermutation(int n) {
        int sum=0;
        int num=n;
        while(num){
            int rem=num%10;
            sum+=fact(rem);
            num/=10;
        }
        int temp=n;
        int freq[10]={0};
        int freq2[10]={0};
        while(temp>0){
            freq[temp%10]++;
            temp/=10;
        }
        temp=sum;
        while(temp>0){
            freq2[temp%10]++;
            temp/=10;
        }
        for(int i=0;i<10;i++){
            if(freq[i]!=freq2[i])
            return false;
        }
        return true;
    }
};