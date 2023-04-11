//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int solve(int a, int b, int c) {
        // code here
        int bw = max(a,b);
        int maxi = max(bw,c);
        
        if(maxi%2==0){
            int req = (maxi/2)-1;
            int new1 = (a+b+c-maxi);
            if(new1>=req && new1<=(a+b+c)){
                return a+b+c;
            }else{
                return -1;
            }
        }
        else{
            int req = (maxi/2);
            int new1 = (a+b+c-maxi);
            if(new1>=req && new1<=(a+b+c)){
                return a+b+c;
            }else{
                return -1;
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;

        Solution ob;
        int ans = ob.solve(a, b, c);
     

        cout <<  ans << "\n";
    }
    return 0;
}
// } Driver Code Ends