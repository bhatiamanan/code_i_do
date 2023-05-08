//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int binary_to_decimal(string s) {
        // Code here.
        int sum=0;
            int n = s.length();
            for(int i=0;i<n;i++){
                int num = s[i]-48;
                sum = sum + (num*pow(2,n-i-1));
            }
            return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends