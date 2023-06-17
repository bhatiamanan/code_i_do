//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K) {
        // code here
        int count = 0;
        while(N>K){
            N-=K;
            count++;
        }
        int ans = 0;
       
        if(count%2==0){
            // if(N==K) ans = (count/2)*K+N;
            ans = (count/2)*K+N;
            
        }
        else{
            // if(N==K) ans = ((count/2)+1)*K+N;
            
            ans = ((count/2)+1)*K+1;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends