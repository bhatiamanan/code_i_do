//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int ones = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int countOfZeros = 0;
                if(matrix[i][j]==1){
                    
                    if(i-1>=0){//up
                        if(matrix[i-1][j] == 0) countOfZeros++;
                        if(j+1<m){//up right diagonal
                            if(matrix[i-1][j+1] == 0) countOfZeros++;
                        }
                        if(j-1>=0){//up left diagonal
                            if(matrix[i-1][j-1] == 0) countOfZeros++;
                        }
                    }
                    if(i+1<n){//down
                        if(matrix[i+1][j] == 0) countOfZeros++;
                        if(j+1<m){//down right diagonal
                            if(matrix[i+1][j+1] == 0) countOfZeros++;
                        }
                        if(j-1>=0){//down left diagonal
                            if(matrix[i+1][j-1] == 0) countOfZeros++;
                        }
                    }
                    if(j-1>=0){//left
                        if(matrix[i][j-1] == 0) countOfZeros++;
                    }
                    if(j+1<m){//right
                        if(matrix[i][j+1] == 0) countOfZeros++;
                    }
                }
                if(countOfZeros!=0 && countOfZeros%2==0) ones++;
            }
        }
        return ones;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends