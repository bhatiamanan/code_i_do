//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int n, vector<int> &bills) {
        // code here
        int billOf5 = 0;
        int billOf10 = 0;
        int need = 5;
        
        for(int i=0;i<n;i++){
            if(bills[i]==5) billOf5++;
            else if(bills[i]==10){
                billOf5--;
                if(billOf5<0) return false;
                billOf10++;
            }
            else {
                billOf5--;
                if(billOf5<0) return false;
                // billOf10--;
                // if(billOf10<0){
                //     billOf5-=2;
                    
                // }
                if(billOf10>=1){
                    billOf10--;
                }else{
                   billOf5-=2;
                   if(billOf5<0) return false;
                }
            }
            
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends