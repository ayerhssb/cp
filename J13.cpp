class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> set1;
        int size_nums = nums.size();
        for(int i=0; i<nums.size(); i++){
            set1.insert(nums[i]);
        }
        nums.clear();
        for(auto i: set1){
            nums.push_back(i);
        }
        for(int i=set1.size(); i<size_nums; i++){
            nums.push_back(0);
        }
        return set1.size();

    }
};
