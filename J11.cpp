// Remove One Element to Make the Array Strictly Increasing
class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {   
       
        int cnt = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] <= nums[i - 1]) {
                if (cnt == 1)
                    return false;
                cnt++;
                if (i > 1 && nums[i] <= nums[i - 2])
                    nums[i] = nums[i - 1];
            }
        }
        return true;

        // int length = nums.size();
        // vector<int> vc;
        // bool value = true;
        // set<int> set1;
        // for (auto i : nums) {
        //     set1.insert(i);
        // }
        // for (int i = 0; i < length - 1; i++) {
        //     for (int j = i + 1; j < length; j++) {
        //         if (nums[i] > nums[j]) {
        //             set1.erase(nums[i]);

        //             int valueToBeDeleted = nums[i];
        //             auto it =
        //                 find(nums.begin(), nums.end(), valueToBeDeleted);
        //             vector<int> vc(set1.begin(), set1.end());
        //             if (it != nums.end()) {
        //                 nums.erase(it);
        //             }

        //             for (int k = 0 ; k< length-1; k++) {
        //                 if (vc[k] == nums[k]) {
        //                     value = true;
        //                 } else {
        //                     value = false;
        //                 };
        //             }
        //             break;
        //         }
        //     }
        // }
        // return value;
    }
};
