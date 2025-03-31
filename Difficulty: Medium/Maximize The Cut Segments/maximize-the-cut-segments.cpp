//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the maximum number of cuts.
    int solver(int n, int x, int y, int z, vector<int>& dp){
        if(n==0) return 0;
        if(n<0) return INT_MIN;
        
        if(dp[n]!=-1) return dp[n];
        
        int solX = 1+solver(n-x, x, y, z, dp);
        int solY = 1+solver(n-y, x, y, z, dp);
        int solZ = 1+solver(n-z, x, y, z, dp);
        
        int ans = max(solX, max(solY, solZ));
        dp[n] = ans;
        return dp[n];
    }
    int maximizeTheCuts(int n, int x, int y, int z) {
        // Your code here
        vector<int> dp(n+1, -1);
        int ans = solver(n, x, y, z, dp);
        return max(0, ans);
    }
};


//{ Driver Code Starts.
int main() {

    // taking testcases
    int t;
    cin >> t;
    while (t--) {
        // taking length of line segment
        int n;
        cin >> n;

        // taking types of segments
        int x, y, z;
        cin >> x >> y >> z;
        Solution obj;
        // calling function maximizeTheCuts()
        cout << obj.maximizeTheCuts(n, x, y, z) << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends