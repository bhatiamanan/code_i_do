//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int maxRowSum = 0;
        int maxColSum = 0;
        
        for(int i=0;i<n;i++){
            int colSum = 0;
            int rowSum = 0;
            for(int j=0;j<n;j++){
                colSum+=matrix[i][j];
                rowSum+=matrix[j][i];
            }
            if(maxRowSum<rowSum) maxRowSum=rowSum;
            if(maxColSum<colSum) maxColSum=colSum;
        }
        int ans =0;
        int sum = max(maxRowSum,maxColSum);
        
        for(int i=0;i<n;i++){
            int rowSum = 0;
            for(int j=0;j<n;j++){
                rowSum+=matrix[j][i];
            }
            ans = ans+sum-rowSum;
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends