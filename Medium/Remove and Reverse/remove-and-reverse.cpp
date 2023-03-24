//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    string removeReverse(string S) {
        // code here
        int i=0;
        int j=S.length()-1;
        bool flag = false;
        
        unordered_map<char, int> mp;
        for(int k=0;k<S.length();k++){
            mp[S[k]]++;
        }
        while(i<=j){
            if(!flag){
                if(mp[S[i]]==1){
                    i++;
                }
                if(mp[S[i]]>1){
                    
                    mp[S[i]]--;
                    S[i]='@';
                    flag = true;
                    i++;
                }
                
            }
            else{
                if(mp[S[j]]==1){
                    j--;
                }
                if(mp[S[j]]>1){
                   
                    mp[S[j]]--;
                    S[j]='@';
                    flag=false;
                    j--;
                }
                
            }
        }
        string ans;
        for(int l=0;l<S.length();l++){
            if(S[l]!='@'){
                ans.push_back(S[l]);
            }
        }
        if(flag==true){
            reverse(ans.begin(), ans.end());
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends