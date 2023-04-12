//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    int binarysearch(vector<int> &arr, int key, int n){
        int s = n/2;
        int e = n-1;
        int index = -1;
        int mid;
        while(s<=e){
            mid = (s+e)/2;
            if(5*arr[mid]<=key){
                index = mid;
                s = mid+1;
            }else{
                e=mid-1;
            }
        }
        return index;
    }
    int dominantPairs(int n,vector<int> &arr){
        // Code here
        int ans=0;
        sort(arr.begin() + n / 2, arr.end());
        for(int i=0;i<n/2;i++){
            int result = binarysearch(arr,arr[i],n);
            if(result != -1){
                ans+=(result-n/2)+1;
            }
        }
        return ans;
    }  
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends