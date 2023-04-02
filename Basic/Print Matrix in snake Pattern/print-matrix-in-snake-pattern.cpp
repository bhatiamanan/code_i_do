//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > arr)
    {   
        // code here
        vector<int> v;
        int n = arr.size();
        int i=0,j=0;
        while(i<n && j<n){
            if(i%2==0){
                v.push_back(arr[i][j]);
                j++;
                if(j==n){
                    j=n-1;
                    i++;
                }
            }else{
                v.push_back(arr[i][j]);
                j--;
                if(j==-1){
                    j=0;
                    i++;
                }
            }
        }
        return v;
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.snakePattern(matrix);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends