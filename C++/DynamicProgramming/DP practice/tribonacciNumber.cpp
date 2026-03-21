// try submitting this on leetcode, here's the link for the problem
// https://leetcode.com/problems/n-th-tribonacci-number/

class Solution {
private:
    vector<int>dp = vector<int>(38,-1);
public:
    int tribonacci(int n) {
        if(n<=1){
            return n;
        }
        if(n==2){
            return 1;
        }
        if(dp[n]!=-1) return dp[n];
        return dp[n] = tribonacci(n-1)+ tribonacci(n-2)+tribonacci(n-3);
        
    }
};