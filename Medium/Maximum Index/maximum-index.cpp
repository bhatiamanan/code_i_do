//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        int maxNum=0;
        int diff;
        for(int j=n-1;j>=1;j--){
            int i=0;
            while(i<j){
                if(arr[i]<=arr[j]){
                    diff= j-i;
                    maxNum = max(maxNum,diff);
                    break;
                }
                i++;
            }
            
        }
        return maxNum;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends