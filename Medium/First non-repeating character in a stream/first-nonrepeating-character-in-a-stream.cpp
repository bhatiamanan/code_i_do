//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    int n = A.length();
		    unordered_map<char, int> count;
		    queue<char> q;
		    string S = "";
		    for(int i=0;i<n;i++){
		        char ch = A[i];
		        count[ch]++;
		        q.push(ch);
		        
		        while(!q.empty()){
		            if(count[q.front()]>1){
		                q.pop();
		            }else{
		                S.push_back(q.front());
		                break;
		            }
		        }
		        if(q.empty()){
		            S.push_back('#');
		        }
		    }
		    return S;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends