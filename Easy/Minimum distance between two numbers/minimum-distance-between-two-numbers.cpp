//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int xPos = -1;
        int yPos = -1;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]==x){
              xPos = i; 
            }else if(a[i]==y){
                yPos = i;
            }
            if(xPos!= -1 && yPos!= -1) ans = min(ans,abs(xPos - yPos));
        }
        if(xPos== -1 || yPos== -1) return -1;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends