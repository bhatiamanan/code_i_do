//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        set <int> rows;
        set <int> cols;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        set<int>::iterator itr;
        for (itr = rows.begin(); itr != rows.end(); itr++) {
            for(int i=0;i<mat[0].size();i++){
                mat[*itr][i] = 0;
            }
        }
        for (itr = cols.begin(); itr != cols.end(); itr++) {
            for(int i=0;i<mat.size();i++){
                mat[i][*itr] = 0;
            }
        }
        return;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        ob.setMatrixZeroes(arr);
        for (auto x : arr) {
            for (auto y : x)
                cout << y << " ";
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends