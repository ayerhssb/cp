class Solution {
public:
    string removeOuterParentheses(string s) {
        // vector<string> ansStr;
        string ansStr = "";
        string finalStr = "";
        int i = 0, flag=0;
        while (s[i] != '\0') {

            if (s[i] == '(') {
                flag += 1;
                ansStr.push_back('(');
            } else {
                flag -= 1;
                ansStr.push_back(')');
            }

            if (flag == 0) {
                
                ansStr.erase(0,1);
                ansStr.pop_back();
                finalStr += ansStr;
                ansStr="";
            }
            i++;
        }

        return finalStr;
    }
};