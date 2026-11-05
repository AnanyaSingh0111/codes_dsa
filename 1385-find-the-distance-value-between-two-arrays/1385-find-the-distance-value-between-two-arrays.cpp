class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n1=arr1.size();
        int n2=arr2.size();
        int count=0;
        sort(arr2.begin(),arr2.end());
        for(int i=0;i<n1;i++){
            int low=0;
            int high=n2-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(abs(arr1[i]-arr2[mid])<=d){
                    count++;
                    break;
                }
                else if(arr2[mid]<arr1[i])
                low=mid+1;
                else
                high=mid-1;
            }
        }
        return n1-count;
    }
};