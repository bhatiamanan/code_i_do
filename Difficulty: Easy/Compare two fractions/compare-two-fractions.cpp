//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {
        
        bool gotSlash = false;
        bool gotComma = false;
        int num = 0;
        int den = 0;
        int num1 = 0;
        int den1 = 0;
        
        for (int i = 0; i < str.length(); i++) {
            if (isdigit(str[i])) {
                int number = str[i] - '0';
                if (!gotComma) {
                    if (!gotSlash) {
                        num = num * 10 + number;
                    } else {
                        den = den * 10 + number;
                    }
                } else {
                    if (!gotSlash) {
                        num1 = num1 * 10 + number;
                    } else {
                        den1 = den1 * 10 + number;
                    }
                }
            } else if (str[i] == '/') {
                gotSlash = !gotSlash;
            } else if (str[i] == ',') {
                gotComma = true;
                gotSlash = false;
            }
        }
        
        if (num * den1 > num1 * den) {
            return to_string(num) + "/" + to_string(den);
        } else if(num * den1 < num1 * den){
            return to_string(num1) + "/" + to_string(den1);
        }else{
            return "equal";
        }
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends