//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
// #include <bits/stdc++.h>
class Solution {
  public:
  
    int fib(int n,vector<long> &dp){
        if(n<=1) return n;
        
        if(dp[n]!= -1) return dp[n]%1000000007;
        dp[n] = fib(n-1, dp) + fib(n-2, dp);
        return dp[n]%1000000007;
    }
    int nthFibonacci(int n){
        // code here
        vector<long> dp;
        for(int i=0;i<=n;i++){
            dp.push_back(-1);
        }
        
        int a = fib(n,dp);
        return a%1000000007;
        
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends