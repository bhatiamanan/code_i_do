//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
   void reverse(vector<int> &arr, int start, int end) {
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
  
  
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        int rows = mat.size();
        int columns = mat[0].size();
        k = k % columns;  // Effective number of rotations

        for (int i = 0; i < rows; i++) {
            reverse(mat[i], 0, k - 1);       // Reverse the first k elements
            reverse(mat[i], k, columns - 1); // Reverse the remaining elements
            reverse(mat[i], 0, columns - 1); // Reverse the entire row
        }
        return mat;
    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(k, mat);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}

// } Driver Code Ends