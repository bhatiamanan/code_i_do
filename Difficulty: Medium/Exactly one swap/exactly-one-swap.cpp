class Solution {
  public:
    
    int countStrings(string &s) {
        // code here
        int n = s.length();
        vector<int> freqArr(26, 0);
        
        for(int i=0;i<n;i++) {
            int index = s[i]-'0'-49;
            freqArr[index]+=1;
        }
        
        int totalStrings = (n*(n-1))/2;
        int stringDueToSameChars = 0;
        bool isMultipleCharAvailable = false;
        
        for(int i=0;i<freqArr.size();i++){
            if(freqArr[i]>1){
                isMultipleCharAvailable = true;
                int freq = freqArr[i];
                stringDueToSameChars += (freq*(freq-1))/2;
            }
        }
        
        if(isMultipleCharAvailable) return totalStrings-stringDueToSameChars+1;
        return totalStrings;
    }
};
