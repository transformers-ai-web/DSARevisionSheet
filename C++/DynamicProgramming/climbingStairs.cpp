// try submitting this on leetcode, here's the link for the problem: 
// https://leetcode.com/problems/climbing-stairs/

class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        int answer = climb(n, dp);
        return answer;
    }
    int climb(int n, vector<int>& dp){
        if(n == 1 || n==0) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n] = climb(n-1,dp) + climb(n-2,dp);
    }
};