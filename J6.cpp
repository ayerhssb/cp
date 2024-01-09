class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        // int m= accounts.size();
        // int sum = 0, max=0;
        // vector<int> sums;
        // for(int i=0; i<m ; i++){
        //     int n = accounts[i].size();
        //     for(int j=0; j<n; j++){
        //         sum = sum + accounts[i][j];
        //     }
        //     sums.push_back(sum);
        //     continue;
        // }
        // for(int k=0; k<m; k++){
        //     if(sums[k] > max){
        //         max = sums[k];
        //     }
        // }
        //auto max = max_element(std::begin(sums), std::end(sums));

        
        // int max = INT_MIN;
        // for (auto val : sums) {
        //     if (max < val) max = val;
        // }
  
        // return max;

        int maxn = 0;
        for (auto& v : accounts) {
            maxn = max(maxn, accumulate(v.begin(), v.end(), 0));
        }
        return maxn;
    }
};
