class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        sort(logs.begin(),logs.end(),[](const vector<int>&a,const vector<int>&b){
           return a[1]<b[1];
        });
        vector<pair<int,int>>q;
        for(int i=0;i<queries.size();i++){
            q.push_back({queries[i],i});
        }
        sort(q.begin(),q.end());
        vector<int>freq(n+1,0);
        vector<int>ans(queries.size());
        int left=0;
        int right=0;
        int active=0;
        for(auto [time,index]:q){
            while(right<logs.size() && logs[right][1]<=time){
                int serverId=logs[right][0];
                if(freq[serverId]==0)
                active++;
                freq[serverId]++;
                right++;
            }
            while(left<right && logs[left][1]<time-x){
                int serverId=logs[left][0];
                freq[serverId]--;
                if(freq[serverId]==0){
                    active--;
                }
                left++;
            }
            ans[index]=n-active;
        }
        return ans;
    }
};