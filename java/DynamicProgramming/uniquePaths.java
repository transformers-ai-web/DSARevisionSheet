class Solution {

    // dp array initialized with -1
    private int[][] dp = new int[101][101];

    public Solution() {
        // Fill dp with -1
        for (int i = 0; i < 101; i++) {
            for (int j = 0; j < 101; j++) {
                dp[i][j] = -1;
            }
        }
    }

    public int uniquePaths(int m, int n) {
        // Base cases
        if (m <= 0 || n <= 0) {
            return 0;
        }

        if (m == 1 && n == 1) {
            return 1;
        }

        // Check memo
        if (dp[m][n] != -1) {
            return dp[m][n];
        }

        // Recurrence
        dp[m][n] = uniquePaths(m - 1, n) + uniquePaths(m, n - 1);

        return dp[m][n];
    }
}