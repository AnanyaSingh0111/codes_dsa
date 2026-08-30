class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        set<int>seen;
        set<int>bad;
        int prev=-1;
        for(int x:nums){
            if(x!=prev){
                if(seen.count(x))
                bad.insert(x);
                else
                seen.insert(x);
            }
            prev=x;
        }
        return seen.size()-bad.size();
    }
};