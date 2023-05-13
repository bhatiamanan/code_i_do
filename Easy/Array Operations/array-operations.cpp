//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        // code here
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0) count++;
        }
        if(count==0) return -1;
        
        int j=0;
        int change = 1;
        while(count>0 && j<n-1){
            if(arr[j]!=0){
                j++;
            }else{
                if(arr[j+1]==0){
                    count--;
                    j++;
                }else{
                    change++;
                    count--;
                    j++;
                }
            }
        }
        // if(arr[n-1]==0) return change+1;
        if(arr[0]==0) return change -1;
        return change;
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
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends