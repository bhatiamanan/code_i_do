class Solution {
  public:
    int minimumCoins(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int ans = INT_MAX;
        sort(arr.begin(), arr.end());
        
        vector<int> prefSum(n,arr[0]);
        for(int i=1;i<n;i++) prefSum[i] = arr[i]+prefSum[i-1];
        
        for(int i=0;i<n;i++){
            int base = arr[i];
            int upperLimit = base+k;
            int upperBoundIndex = upper_bound(arr.begin()+i, arr.end(), upperLimit) - arr.begin();
            
            //this will keep check if needed to remove piles
            int prevCoinsLeft=0;
            if(i>0) prevCoinsLeft = prefSum[i-1];
            
            int coinsToRemove = (prefSum[n-1]-prefSum[upperBoundIndex-1])-
                                    (n-upperBoundIndex)*upperLimit+
                                    prevCoinsLeft;
                                    
            ans = min(ans, coinsToRemove);
        }
        return ans;
    }
};
