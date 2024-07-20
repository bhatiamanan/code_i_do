//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int findMaxProduct(vector<int>& arr) {
        // Write your code here
        const int MOD = 1e9 + 7;
        int negValue = INT_MIN;
        long long int ans = 1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0) continue;
            else {
                ans *= (long long int)arr[i];
                ans %= MOD;
            }
            if(arr[i]<0){
                if(arr[i]>negValue) negValue = arr[i];
            }
        }
        if(ans>0) return ans%MOD;
        return (ans/negValue)%MOD;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        long long int ans = ob.findMaxProduct(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends