//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int sumOfDigits(int n){
        int sum = 0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    
    bool isPrime(int n){
        if (n==1) return false;
        for(int i = 2; i<=sqrt(n); i++){
            if(n%i==0) return false;
        }
        return true;
    }
    
    int smithNum(int n) {
        // code here
        if(isPrime(n)) return 0;
        int sum1 = sumOfDigits(n);
        int sum2 = 0;
        for(int i=2;i<=n;i++){
            if(n%i==0){
                int s = sumOfDigits(i);
                while(n%i==0 && n>0){
                    sum2+= s;
                    n/=i;
                }
            }
        }
        if(sum1==sum2) return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends