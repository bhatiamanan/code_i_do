//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:

    bool solve(vector<vector<char>>& board, string word, int i, int j, int index){
        if(index == word.length()) return true;
        if(i<0 || j<0 || i==board.size() || j==board[0].size() || board[i][j]!=word[index]){
            return false;
        }
        board[i][j] = '-';
        index++;
        bool newAnswer = solve(board, word, i-1, j, index) || solve(board, word, i+1, j, index) 
                      || solve(board, word, i, j+1, index) || solve(board, word, i, j-1, index);
        board[i][j] = word[index-1];
        return newAnswer;
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j] == word[0]){
                    bool answer = solve(board, word, i, j, 0);
                    if(answer==true){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends