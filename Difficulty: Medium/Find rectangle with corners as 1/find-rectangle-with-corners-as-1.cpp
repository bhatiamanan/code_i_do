class Solution {
  public:
    bool ValidCorner(vector<vector<int> >& mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        
        for(int r1=0;r1<n-1;r1++){
            for(int r2=r1+1;r2<n;r2++){
                for(int c1=0;c1<m-1;c1++){
                    for(int c2=c1+1;c2<m;c2++){
                        if(mat[r1][c1] == 1 && mat[r1][c2]==1){
                            if(mat[r2][c1] == 1 && mat[r2][c2]==1) return true;
                            
                        }
                    }
                }
            }
        }
        return false;
    }
};