//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long int minOperations(int N) {
        // Code here
        
        // long long int count=0;
        
        if(N%2==0){
            return (N/2)*1LL*(N/2);
        }else{
            return (N/2)*1LL*((N/2)+1);
        }
        
        // long long int sum=0;
        // for(int i=0;i<N;i++){
        //     sum+=(2*i+1);
        // }
        // long long int avg = sum/N;
        // int mid = N/2;
        // int j=0;
        // long long int count=0;
        // while(j<mid){
        //     count+=avg-(2*j+1);
        //     j++;
        // }
        // return count;
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
        cout << ob.minOperations(n) << endl;
    }
    return 0;
}
// } Driver Code Ends