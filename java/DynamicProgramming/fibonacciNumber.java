// try submitting this on leetcode, here's the link for the problem
// https://leetcode.com/problems/fibonacci-number/

class Solution {
    public int fib(int n) {
        int[] dp = new int[n + 1];
        for (int i = 0; i <= n; i++) {
            dp[i] = -1;
        }
        return calculateFib(n, dp);
    }

    private int calculateFib(int n, int[] dp) {
        if (n <= 1) {
            return n;
        }
        if (dp[n] != -1) {
            return dp[n];
        }
        dp[n] = calculateFib(n - 1, dp) + calculateFib(n - 2, dp);
        return dp[n];
    }
}
