class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int n = s.length();
        int longest = 0;
        
        
        for(int i=0;i<n;i++){
            map<char, int> mp;
            
            for(int j=i;j<n;j++){
                mp[s[j]]++;
                int sizeOfMap = mp.size();
                if(mp[s[j]]>1) {
                    longest = max(longest, sizeOfMap);
                    break;
                }else if(j==n-1) longest = max(longest, sizeOfMap);
            }
        }
        return longest;
    }
};
