//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int waysByDp(int n, vector<int>& dp){
        if(n<0) return 0;
        if(n==0) return 1;
        
        if(dp[n]!=-1) return dp[n];
        dp[n] = waysByDp(n-1, dp)+ waysByDp(n-2, dp);
        return dp[n];
    }
    int countWays(int n) {
        // your code here
        if(n<0) return 0;
        if(n==0) return 1;
        vector<int> dp(n+1, -1);
        
        return waysByDp(n, dp);
    }
};



//{ Driver Code Starts.
int main() {
    // taking total testcases
    int t;
    cin >> t;
    while (t--) {
        // taking stair count
        int m;
        cin >> m;
        Solution ob;
        cout << ob.countWays(m) << endl; // Print the output from our pre computed array

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends