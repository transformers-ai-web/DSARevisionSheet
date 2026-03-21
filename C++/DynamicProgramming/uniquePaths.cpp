// try submitting this on leetcode, here's the link for the problem
// https://leetcode.com/problems/unique-paths/

class Solution {
    vector<vector<int>>dp = vector<vector<int>>(101,vector<int>(101,-1));
public:
    int uniquePaths(int m, int n) {
        if(m <= -1 || n<=-1){
            return 0;
        }
        if(m==1 && n==1){
            return 1;
        }
        if(dp[m][n]!=-1) return dp[m][n];
        return dp[m][n] = uniquePaths(m-1,n) + uniquePaths(m,n-1);
        
    }
};