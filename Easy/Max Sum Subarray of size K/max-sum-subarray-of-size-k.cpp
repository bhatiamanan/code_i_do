//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &Arr , int n){
        // code here 
        long sum = 0;
        long maxSum = 0;
        for(int i=0;i<k;i++){
            sum+=Arr[i];
        }
        for(int j=k;j<n;j++){
            if(sum>maxSum) maxSum = sum;
            sum-=Arr[j-k];
            sum+=Arr[j];
        }
        if(sum>maxSum) maxSum = sum;
        return maxSum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends