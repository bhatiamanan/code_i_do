//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
        // code here
        map<char, int> mp = {
        {'!', 0}, {'#', 0}, {'$', 0}, {'%', 0}, {'&', 0},
        {'*', 0}, {'?', 0}, {'@', 0}, {'^', 0}
    };

    for(int i = 0; i < n; i++) {
        mp[nuts[i]]++;
        mp[bolts[i]]++;
    }

    
    string str;
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        if(it->second > 1) str += it->first;
    }

    for (int i = 0; i < str.length(); i++) {
        nuts[i] = str[i];
        bolts[i] = str[i];
    }
    nuts[str.length()] = '\0';
    bolts[str.length()] = '\0';
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(n, nuts, bolts);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends