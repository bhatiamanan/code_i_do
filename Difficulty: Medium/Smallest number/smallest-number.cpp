//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string smallestNumber(int sum, int digits) {
        
        if(sum>digits*9) return "-1";
        // code here
        string ans = "";
        for(int i=1;i<=digits;i++){
         int num = sum-(digits-i)*9<=0?0:sum-(digits-i)*9;
         if(num==0 && i==1) num=1;
         ans += num+'0';
         sum-=num;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends