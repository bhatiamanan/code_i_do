//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    bool solveMem(int index, int n, int arr[],int target, vector<vector<int>>& dp){
        if(index>=n || target<0) return 0;
        if(target==0) return 1;
        
        if(dp[index][target]!= -1) return dp[index][target];
        
        bool incl = solveMem(index+1, n, arr, target-arr[index], dp);
        bool excl = solveMem(index+1, n, arr, target, dp);
        
        return dp[index][target] =  incl||excl;
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum = 0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        if(sum%2!=0) return 0;
        int target = sum/2;
        vector<vector<int>>dp(N, vector<int>(target+1, -1));
        return solveMem(0, N, arr, target, dp);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends