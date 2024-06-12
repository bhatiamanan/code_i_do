//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    int check4(int n){
        int count4 = 0;
        while(n!=0){
            if(n%10==4) {
                count4++;
                break;
            }
            n/=10;
        }
        return count4;
    }
    int countNumberswith4(int n) {
        // code here
        if(n<4) return 0;
        int ans = 0;
        for(int i=4;i<=n;i++){
            ans += check4(i);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.countNumberswith4(n);

        cout << res << endl;
    }
}

// } Driver Code Ends