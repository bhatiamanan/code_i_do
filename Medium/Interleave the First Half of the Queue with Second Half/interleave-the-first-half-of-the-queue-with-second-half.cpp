//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        int n = q.size();
        vector<int> v;
        vector<int> qt;
        while(!q.empty()){
            v.push_back(q.front());
            q.pop();
        }
        bool flag = true;
        int i = 0;
        int j = n/2;
        while(i<=n/2 && j<n){
            if(flag){
                qt.push_back(v[i]);
                i++;
            }else{
                qt.push_back(v[j]);
                j++;
            }
            flag = !flag;
        }
        return qt;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// } Driver Code Ends