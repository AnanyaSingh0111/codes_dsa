class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0,j=0;
        int count=0;
        int k=0;
        int ans=0;
        while(i<n && j<n){
            if(chars[j]==chars[i]){
                j++;
                count++;
            }
            if(j==n || chars[i]!=chars[j]){
                chars[k++]=chars[i];
                if(count>1){
                    string s=to_string(count);
                    for(char ch:s)
                    chars[k++]=ch;
                }
                i=j;
                count=0;
            }
        }
        return k;
    }
};