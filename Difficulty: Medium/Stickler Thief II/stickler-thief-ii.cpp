//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
      int solver(vector<int>& arr) {
        int n = arr.size();
        
        int prev = arr[0];
        int prev2 = 0;
        
        for(int i=1;i<n;i++){
        int include = prev2 + arr[i];
        int exclude = prev + 0;
        int ans = max(include, exclude);
        prev2 = prev;
        prev = ans;
        }
        
        return prev;
    }
    
    int maxValue(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        vector<int> first, last;
        
        for(int i=0;i<n;i++){
            if(i!=n-1) first.push_back(arr[i]);
            if(i!=0) last.push_back(arr[i]);
        }
        
        return max(solver(first), solver(last));
        
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        int res;
        res = ob.maxValue(arr);
        cout << res << "\n"
             << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends