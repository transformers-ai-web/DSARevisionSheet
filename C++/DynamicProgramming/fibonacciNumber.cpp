// try submitting this on leetcode, here's the link for the problem
// https://leetcode.com/problems/fibonacci-number/

class Solution {
public:
    int fib(int n) {
        vector<int>dp(n+1, -1);
        int answer = calculatefib(n,dp);
        return answer;
    }
    int calculatefib(int n, vector<int>& dp){
        if(n<=1) return n;
        if(dp[n]!=-1) return dp[n];
        dp[n] = calculatefib(n-1,dp) + calculatefib(n-2,dp);
        return dp[n];
    }
};