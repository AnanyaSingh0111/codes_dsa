
class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int n = nums.size();
        long long maxi = LLONG_MIN;
        vector<int> ans = {-1, -1};

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j &&
                    1LL * nums[i] + nums[j] == target &&
                    nums[i] > nums[j]) {

                    long long prod = 1LL * nums[i] * nums[j];

                    if (prod > maxi) {
                        maxi = prod;
                        ans = {i, j};
                    }
                }
            }
        }

        return ans;
    }
};
