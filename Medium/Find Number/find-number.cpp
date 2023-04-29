//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long findNumber(long long N){
        // Code here
        int arr[5] = {9,1,3,5,7};
        long long ans=0;
        while(N>0){
            ans = (ans*10)+arr[N%5];
            if(N%5==0){
                N=N/5;
                N--;
            }else{
                N = N/5;
            }
            
        }
        long long temp=0;
        while(ans!=0){
            temp = temp*10+(ans%10);
            ans/=10;
        }
        return temp;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        Solution ob;
        cout<<ob.findNumber(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends