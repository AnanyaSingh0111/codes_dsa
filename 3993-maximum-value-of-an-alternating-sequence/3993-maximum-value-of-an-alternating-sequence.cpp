class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1)
        return s;
        return (long long)s + m
             + (long long)((n - 2) / 2) * (m - 1);
    }
};