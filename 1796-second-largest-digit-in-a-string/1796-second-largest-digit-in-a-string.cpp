class Solution {
public:
    int secondHighest(string s) {
        int largest=-1;
        int second=-1;
        for(char ch:s){
            if(ch>='0' && ch<='9'){
                int digit=ch-'0';
                if(digit>largest){
                    second=largest;
                    largest=digit;
                }
                else if(digit<largest && digit>second)
                second=digit;
            }
        }
        return second;
    }
};