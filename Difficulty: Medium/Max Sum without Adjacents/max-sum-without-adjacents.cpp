//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
  
    int helper(vector<int>& arr, vector<int>& dp, int n){
        if(n>=arr.size()) return 0;
        
        if(dp[n] != -1) return dp[n];
        
        int includingCurrentNumber = helper(arr, dp, n+2) + arr[n];
        int excludingCurrentNumber = helper(arr, dp, n+1) + 0;
        dp[n] = max(includingCurrentNumber, excludingCurrentNumber);
        return dp[n];
    }
    
    // calculate the maximum sum with out adjacent
    int findMaxSum(vector<int>& arr) {
        // code here
        vector<int> dp(arr.size()+1, -1);
        return helper(arr, dp, 0);
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.findMaxSum(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends