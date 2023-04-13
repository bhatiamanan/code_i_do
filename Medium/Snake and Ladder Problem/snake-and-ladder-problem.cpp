//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minThrow(int N, int arr[]){
        // code here
        unordered_map<int,int>mp;
        for(int i=0;i<2*N;)
        {
            mp[arr[i]]=arr[i+1];
            i+=2;
        }
        queue<int>q;
        vector<int>vis(31,0);
        q.push(1);
        int t=0;
        while(!q.empty())
        {
            
            int sz=q.size();
            while(sz--)
            {
                
                int curr=q.front();
                if(curr>=30) return t;
                q.pop();
                for(int i=1;i<=6;i++)
                {
                    int nw=curr+i;
                    
                    if(nw<=30 && !vis[nw]  )
                    {
                        
                    
                    if(mp[nw]==0)
                    q.push(nw);
                    else
                    {
                        q.push(mp[nw]);
                    }
                    vis[nw]=1;
                    vis[mp[nw]]=1;
                    }
                }
                
                
                
                
                
                
            }
            t++;
            
    
            
            
        }
        
    
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[2*N];
        for(int i = 0;i < 2*N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.minThrow(N, arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends