class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        int i=0;
        int j=1;
        int k=2;
        int n=mountain.size();
        vector<int>ans;
        while(k<n){
            if(mountain[i]<mountain[j] && mountain[j]>mountain[k]){
                ans.push_back(j);
            }
            i++;
            j++;
            k++;
        }
        return ans;
    }
};