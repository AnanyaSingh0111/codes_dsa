class Solution {
public:
    int minOperations(int n) {
        int ans=0;
        while(n>0){
            if((n&(n-1))==0){
                ans++;
                break;
            }
            if(n&1){
                if((n&3)==3){
                    n+=1;
                }
                else
                n-=1;
                ans++;
            }
            else{
                n>>=1;
            }
        }  
        return ans;      
    }
};