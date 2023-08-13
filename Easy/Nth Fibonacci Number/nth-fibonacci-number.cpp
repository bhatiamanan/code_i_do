//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        int prev1 = 0;
        int prev2 = 1;
        if(n==0) return prev1;
        for(int i=0;i<n;i++){
            int curr = (prev1+prev2)%1000000007;
            prev1 = prev2;
            prev2 = curr;
        }
        return prev1;
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