class Solution {
  public:
    bool isDivisor(vector<int>& arr, int k, int num){
        
        int sum = arr.size();
        
        for(int i=0;i<arr.size();i++){
            sum+=(arr[i]/num);
            if(arr[i]%num==0) sum--; 
        }
        
        if(sum<=k) return true;
        return false;
    }
    
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        int n = arr.size();
        
        if(n==1 && arr[0]<=k) return 1;

        int maxi = *max_element(arr.begin(), arr.end());
        
        int ans = -1;
        int left = 1, right = maxi;
        
        while(left<=right){
            int mid = (left+right)/2;
            
            if(isDivisor(arr, k, mid)){
                ans = mid;
                right = mid-1;
            }else{
                left = mid+1;
            }
            
        }
        return ans;
    }
};
