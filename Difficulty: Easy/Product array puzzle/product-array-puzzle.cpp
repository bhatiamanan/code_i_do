//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        vector<int> ans;
        int prod = 1;
        int zeroCount = 0;
        int firstZeroIndex = -1;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==0) {
                zeroCount++;
                if(firstZeroIndex == -1) firstZeroIndex = i;
            }
            else prod*=arr[i];
        }
        if(zeroCount>0){
            vector<int> res(n,0);
            if(zeroCount==1){
                res[firstZeroIndex] = prod;
            }
            ans = res;
        }else{
            for(int i=0;i<n;i++){
                ans.push_back(prod/arr[i]);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends