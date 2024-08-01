//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        string possCommonPrefix = "";
        int minLen = INT_MAX;
        int n = arr.size();
        for(int i=0;i<n;i++){
            int m = arr[i].size();
           if(m<minLen){
               minLen = m;
               possCommonPrefix = arr[i];
           } 
        }
        
        int countAll = 0;
        for(int i=0;i<n;i++){
            string lessenCommonPrefix = "";
            bool countAllInc = false;
            for(int j=0;j<possCommonPrefix.size();j++){
                if(arr[i][j]==possCommonPrefix[j]){
                    lessenCommonPrefix+=possCommonPrefix[j];
                    if(!countAllInc){
                        countAll++;
                        countAllInc = !countAllInc;
                    }
                }else break;
            }
            possCommonPrefix = lessenCommonPrefix;
            
        }
        if(arr.size() != countAll) return "-1";
        return possCommonPrefix;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends