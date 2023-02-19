//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &mat, int n, int m)
        {
            // your code here
            int r = 0 , c = m-1 , ans = 0;
        while( (r < n) && (c >= 0) ){
            if( mat[r][c] == 0 )
                r++;
            else{
                c--;
                ans = r ;
            }
            
        }
        return ans ;
            
        }
};

//{ Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}
// } Driver Code Ends