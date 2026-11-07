class Solution {
public:
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        int n=servers.size();
        int m=tasks.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>free;
        priority_queue<pair<long long ,int>,vector<pair<long long,int>>,greater<pair<long long,int>>>busy;
        for(int i=0;i<n;i++){
            free.push({servers[i],i});
        }
        vector<int>ans;
        long long time=0;
        for(int j=0;j<m;j++){
            time=max(time,(long long)j);
            while(!busy.empty() && busy.top().first<=time){
                int serverIndex=busy.top().second;
                busy.pop();
                free.push({servers[serverIndex],serverIndex});
            }
        if(free.empty()){
            time=busy.top().first;
            while(!busy.empty() && busy.top().first<=time){
                int serverIndex=busy.top().second;
                busy.pop();
                free.push({servers[serverIndex],serverIndex});
            }
        }
        auto [weight,serverIndex]=free.top();
        free.pop();
        ans.push_back(serverIndex);
        long long freeTime=time+tasks[j];
        busy.push({freeTime,serverIndex});
        }
        return ans;
    }
};