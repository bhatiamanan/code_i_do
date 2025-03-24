//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int solver(vector<int> &coins, int sum, vector<int>& dp) {
        // code here
        if(sum<0) return INT_MAX;
        if(sum==0) return 0;
        int mini = INT_MAX;
        
        if(dp[sum]!=-1) return dp[sum];
        
        for(int i=0;i<coins.size();i++){
            int ans = solver(coins, sum-coins[i], dp);
            if(ans!=INT_MAX) mini = min(mini, 1+ans); 
        }
        dp[sum] = mini;
        return dp[sum];
    }
    
    int minCoins(vector<int> &coins, int sum) {
        vector<int> dp(sum+1, -1);
        int ans = solver(coins, sum, dp);
        if(ans==INT_MAX) return -1;
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minCoins(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends