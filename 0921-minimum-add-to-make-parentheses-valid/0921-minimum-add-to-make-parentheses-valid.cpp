class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0,x=0;
        for(char ch:s){
            if(ch=='('){
                count++;
            }
            else if(ch==')' && count>0)
            count--;
            else x++;
        }     
        return x+count;
    }
};