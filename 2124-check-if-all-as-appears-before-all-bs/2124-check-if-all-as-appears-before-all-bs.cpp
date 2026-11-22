class Solution {
public:
    bool checkString(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(s.substr(i,j-i+1)=="ba")
                return false;
            }
        }
        return true;
    }
};