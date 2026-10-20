class Solution {//optimal but difficult tc-O(nlog26) sc-O(1)
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>freq(26,0);
        for(char x:tasks){
            freq[x-'A']++;
        }
        priority_queue<int>pq;
        for(int f:freq){
            if(f>0)
            pq.push(f);
        }
        int time=0;
        while(!pq.empty()){
            int cycle=n+1;
            vector<int>temp;
            while(cycle>0 && !pq.empty()){
                int curr=pq.top();
                pq.pop();
                curr--;
                if(curr>0) temp.push_back(curr);
                time++;
                cycle--;
            }
            for(int x:temp){
                pq.push(x);
            }
            if(pq.empty()) break;
            time+=cycle;
        }
        return time;
    }
};