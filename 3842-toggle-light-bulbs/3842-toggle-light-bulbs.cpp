class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<bool>on(101, false);
        for (int bulb:bulbs){
            on[bulb]=!on[bulb];
        }
        vector<int>ans;
        for (int i = 0; i < on.size(); i++) {
            if(on[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};