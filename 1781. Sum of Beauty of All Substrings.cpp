class Solution {
public:

    
    int beautySum(string s) {
        
        int count=0;
        int charCounts[26];
        for(int i=0; i<s.size();i++){
            memset(charCounts, 0, sizeof charCounts);
            for(int j=i; j<s.size(); j++){
                charCounts[s[j]-'a']++;

                int minfreq = 504, maxfreq = 0;
                for(int k : charCounts){
                    if(k>0){
                        maxfreq = max(maxfreq, k);
                        minfreq = min(minfreq, k);
                    }
                }
                count += maxfreq - minfreq;
            }

            

            // count += (mostfreq(substring) - leastfreq(substring));
        }

        return count;
    }
};
