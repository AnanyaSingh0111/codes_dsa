class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>score(n+1,0);
        for(auto &it:trust){
            int u=it[0];
            int v=it[1];
            score[u]--;
            score[v]++;
        }
        for(int i=1;i<=n;i++){
            if(score[i]==n-1)
            return i;
        }
        return -1;

    }
};