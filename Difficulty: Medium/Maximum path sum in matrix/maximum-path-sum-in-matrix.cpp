// User function Template for C++

class Solution {
  public:
    int helper(vector<vector<int>>& mat, int i, int j, int n, int m, vector<vector<int>>& dp){
        
        if(i>=n || j>=m || j<0 || i<0) return 0;
        
        if(dp[i][j]==-1){
            int left = helper(mat, i+1, j-1, n, m, dp);
            int down = helper(mat, i+1, j, n, m, dp);
            int right = helper(mat, i+1, j+1, n, m, dp);
            
            dp[i][j] = mat[i][j] + max({down,left, right});
        }
        return dp[i][j];
    }
    
    int maximumPath(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        int maxAns = INT_MIN;
        
        vector<vector<int>> dp(n, vector<int>(m, -1));
        
        for(int i=0;i<m;i++){
            int ans = helper(mat, 0, i, n, m, dp);
            maxAns = max(maxAns, ans);
        }
        return maxAns;
    }
};