class Solution {
public:
    string reverseWords(string s) {
        string midstr = "";
        string ans = "";
        for (int i = s.size() - 1; i >= 0; i--) {
            if (isspace(s[i])) {
                if(midstr != ""){
                ans += midstr;
                ans += " ";
                }
                midstr = "";
                continue;
            } else {

                midstr.insert(0, 1, s[i]);
            }
        }
        ans += midstr;
        int i = 0, j= ans.size()-1;
        while(isspace(ans[i])){ans.erase(0,1); i++;}
        while(isspace(ans[j])){ans.pop_back(); j--;}
            
        return ans;
    }
};