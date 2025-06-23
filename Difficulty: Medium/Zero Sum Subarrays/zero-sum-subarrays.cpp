class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here.
        map<int, int> mp;
        mp[0]=1;
        int n = arr.size();
        int prefSum = 0;
        int count = 0;
        
        for(int i=0;i<n;i++){
            prefSum+=arr[i];
            count += mp[prefSum];
            mp[prefSum]++;
        }
        return count;
    }
};