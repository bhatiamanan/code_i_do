//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string removeDups(string str) {
        // Your code goes here
        unordered_set<char> checkChar;
        string answer = "";
        for(int i=0;i<str.length();i++){
            
            if(checkChar.empty()) {
                checkChar.insert(str[i]);
                answer+=str[i];
            }
            else{
                if (checkChar.find(str[i]) != checkChar.end()) {
                    continue;
                }else{
                    checkChar.insert(str[i]);
                    answer+=str[i];
                }
            }
        }
        return answer;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.removeDups(s) << "\n";
    }

    return 0;
}
// } Driver Code Ends