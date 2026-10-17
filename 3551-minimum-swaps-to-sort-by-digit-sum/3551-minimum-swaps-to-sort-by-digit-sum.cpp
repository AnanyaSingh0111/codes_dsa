class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<pair<pair<int,int>,int>>arr;
        for(int x=0;x<n;x++){
            int temp=nums[x];
            long long add=0;
            while(temp){
                add+=temp%10;
                temp/=10;
            }
            arr.push_back({{add,nums[x]},x});
        }
        sort(arr.begin(),arr.end());
        vector<int>vis(n,0);
        int swaps=0;
        for(int i=0;i<n;i++){
            if(vis[i] || arr[i].second==i)
            continue;
            int cycleSize=0;
            int j=i;
            while(!vis[j]){
                vis[j]=1;
                j=arr[j].second;
                cycleSize++;
            }
            swaps+=cycleSize-1;
        }
        return swaps;
    }
};