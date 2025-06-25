class Solution {
  public:
    bool sameFreq(string& s) {
        // code here
        vector<int> freq(26, 0);
        for(int i=0;i<s.length();i++) freq[s[i] - 'a']++;
        
        map<int, int>freqVsCountMap;
        for(int i=0;i<freq.size();i++){
            if (freq[i] > 0) freqVsCountMap[freq[i]]++;
        }
        
        int mapSize = freqVsCountMap.size();
        if(mapSize == 1) return true;
        else if(mapSize > 2) return false;
        
        auto it=freqVsCountMap.begin();
        int f1 = it->first, c1 = it->second;
        if(f1==1 && c1==1) return true;
        it++;
        int f2 = it->first, c2 = it->second;
        if(f2==1 && c2==1) return true;
        
        if(abs(f1-f2)==1){
            if((f1>f2 && c1==1) || (f1<f2 && c2==1)) return true;
        }
        return false;
    }
};