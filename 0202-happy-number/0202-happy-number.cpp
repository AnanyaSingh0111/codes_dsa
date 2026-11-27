class Solution {
public:
    int get(int n){
        int sum=0;
        while(n){
            int rem=n%10;
            sum+=rem*rem;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        set<int>seen;
        while(n!=1){
        if(seen.count(n))
        return false;
        seen.insert(n);
        n=get(n);
        }
        return true;
    }
};