//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    
    int nthFibonacci(int n) {
        // code here
        if(n<2) return n;
        int justPrev=1;
        int prevBeforePrev=0;
        int num = 0;
        for(int i=2;i<=n;i++){
            num = justPrev + prevBeforePrev;
            prevBeforePrev = justPrev;
            justPrev = num;
        }
        return num;
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

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends