class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int ans=0;
        int l=0,f=0;
        for (int r=0;r<answerKey.size();r++){
            if(answerKey[r]=='F')
            f++;
            while(f>k){
                if(answerKey[l]=='F')
                f--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
         l=0;
         int t=0;
        for (int r=0;r<answerKey.size();r++){
            if(answerKey[r]=='T')
            t++;
            while(t>k){
                if(answerKey[l]=='T')
                t--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};