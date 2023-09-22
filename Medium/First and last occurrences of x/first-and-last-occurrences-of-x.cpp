//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
    int lowerBound(int arr[], int n, int x){
        
        int low=0;
        int high=n-1;
        int ans = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]==x){
                ans = mid;
                high = mid-1;
            }else if(arr[mid]>x){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
    
    int upperBound(int arr[], int n, int x){
        
        int low=0;
        int high=n-1;
        int ans = 0;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]==x){
                ans = mid;
                low = mid+1;
            }else if(arr[mid]>x){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
    
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int> v;
        v.push_back(lowerBound(arr,n,x));
        if(v[0]== -1) v.push_back(-1);
        else v.push_back(upperBound(arr,n,x));
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends