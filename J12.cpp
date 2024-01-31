class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            // int count = __builtin_popcount(i);
            if(__builtin_popcount(i) == k){
                ans += nums[i];
            }
        }
        return ans;
    }
};
