class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> result;
        int maxCandies = *max_element(candies.begin(), candies.end());
        for (int i =0; i<n ;i++){
            int totalCandies = candies[i] + extraCandies;
            if(totalCandies >= maxCandies){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};
