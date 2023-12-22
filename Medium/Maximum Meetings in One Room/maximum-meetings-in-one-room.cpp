//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        vector<pair<int, int>> endterm;
        vector<int> ans;
        
        for(int i=0;i<N;i++){
            endterm.push_back({F[i], i+1});
        }
        
        sort(endterm.begin(), endterm.end());
        
        int last = endterm[0].first;
        ans.push_back(endterm[0].second);
        
        for(int i=1; i<N;i++){
            if(S[endterm[i].second-1]> last){
                ans.push_back(endterm[i].second);
                last = endterm[i].first;
            }
        }
        sort(ans.begin(), ans.end());
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
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends