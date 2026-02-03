// User function Template for C++

class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& strs) {
        // code here
        vector<vector<string>> ans;
        int n = strs.size();
        vector<bool> visited(n, false);

        for(int i=0;i<n;i++){
            if(visited[i]) continue;
            vector<string> ansElement;
            unordered_map<char, int> toCheck;
            for(int k=0;k<strs[i].length();k++){
                toCheck[strs[i][k]]++;
            }
            ansElement.push_back(strs[i]);
            for(int j=i+1;j<n;j++){
                unordered_map<char, int> toEquate;
                for(int k=0;k<strs[j].length();k++){
                    toEquate[strs[j][k]]++;
                }
                if(toEquate == toCheck){
                    ansElement.push_back(strs[j]);
                    visited[j] = true;
                }
            }
            ans.push_back(ansElement);
        }
        return ans;
    }
};