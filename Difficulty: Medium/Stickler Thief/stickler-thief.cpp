//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


// } Driver Code Ends

class Solution {
  public:

    int solver(vector<int>& arr, int n, vector<int>& dp) {
        
        if(n<0) return 0;
        
        if(dp[n]!=-1) return dp[n];
        
        int include = solver(arr, n-2, dp) + arr[n];
        int exclude = solver(arr, n-1, dp) + 0;
        
        dp[n] = max(include, exclude);
        return dp[n];
    }
    
    int findMaxSum(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> dp(n, -1);
        return solver(arr, n-1, dp);
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.findMaxSum(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends