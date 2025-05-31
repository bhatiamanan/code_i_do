class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        // code here
        map<int, int> mp;
        int n = mat1.size();
        
        int ans = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[x-mat1[i][j]]++;
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mp.find(mat2[i][j])!=mp.end()) ans+=mp[mat2[i][j]];
            }
        }
        return ans;
    }
};