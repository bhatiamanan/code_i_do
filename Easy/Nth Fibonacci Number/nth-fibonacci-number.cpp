//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
       long long int a=1;
       long long int b=1;
       long long int c=1;
       long long int count =2;
       if(n==1 || n==2){
           return 1;
       }
       if(n==3){
           return 2;
       }
       
       
       while(count<n){
           a=b;
           b=c;
           c=(a+b)%1000000007;
           count++;
       }
       return c ;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends