//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string input)
{
    // your code here
    
    if(input.length()%2==1) return -1;
    int countOpen=0;
    int countClose=0;
    
	stack<char> st;
    for(int i=0;i<input.length();i++){
		if (input[i] == '{'){
		    st.push(input[i]);
		    countOpen++;
        }
        if (input[i] == '}') {
			if (!st.empty() && st.top() == '{') {
				st.pop();
				countOpen--;
			}else{
				st.push(input[i]);
				countClose++;
			}
		}
    }
    return (countClose+1)/2 + (countOpen+1)/2;
}