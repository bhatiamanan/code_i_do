//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        string str = "";
        int counter = 0;
        // int indexToStart = -1;
        
        for(int i=0;i<s.length();i++){
            if(counter==count) {
                str = s.substr(i, s.length()-i);
                break;
            }
            if(s[i]==ch) counter++;
        }
        return str;
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
        char ch;
        int count;

        cin >> s >> ch >> count;
        Solution ob;
        cout << ob.printString(s, ch, count) << "\n";
    }

    return 0;
}
// } Driver Code Ends