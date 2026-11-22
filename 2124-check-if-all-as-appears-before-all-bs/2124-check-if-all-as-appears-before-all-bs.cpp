class Solution {
public:
    bool checkString(string s) {
        int n=s.size();
        bool foundB=false;
        for(char ch:s){
            if(ch=='b')
            foundB=true;
            else if(ch=='a' && foundB==true){
                return false;
            }
        }
        return true;
    }
};