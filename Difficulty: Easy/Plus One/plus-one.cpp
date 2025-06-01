// User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr, int N) {
        // code here
        int carry = 1;
        vector<int> ans;
        
        for(int i=N-1;i>=0;i--){
            if(carry) {
                int num = arr[i]+carry;
                ans.push_back(num%10);
                carry = num/10;
            }else ans.push_back(arr[i]);
        }
        if(carry) ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};