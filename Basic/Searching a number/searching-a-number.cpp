//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

    int linearRec(int arr[], int n, int k){
        if(n==0) return 2;
        if(arr[0]==k) return 1;
        int index = 1+linearRec(arr+1,n-1,k);
        return index;
    }
	int search(int arr[], int n, int k) {
	    // code here
	    int a = linearRec(arr,n,k);
	    if(a>n) return -1;
	    return a;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, k;
        cin >> n >> k;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.search(a, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends