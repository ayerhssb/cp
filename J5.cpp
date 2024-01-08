class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> output;
        int count =0;
        int length1 = words.size();
        for(int i =0 ; i<length1; i++){
            string word = words[i];
            int length2 = word.size();
            for(int j=0;j<length2; j++){
                if(word[j] == x){
                    count++;
                    output.push_back(i);
                    break;
                }
                else{
                    continue;
                }
            }
        }
        return output;
    }
};
