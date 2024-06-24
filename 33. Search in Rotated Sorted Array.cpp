class Solution {
public:
    int search(vector<int>& nums, int target) {
        // vector<int> nums1;
        // int ans =-1;
        // for(int i=0;i<nums.size(); i++){
        //     if(nums[i]>nums[i+1]){
        //         // nums1 = nums1.insert(nums.begin(), nums.begin()+i);
        //         int k=1;
        //         while(k<=i){
        //             nums.push_back(nums[k]);
        //             nums.erase(nums.begin());
        //             k++;
        //         }
        //         break;
        //     }
        // }


        // int high=nums.size()-1, low = 0;
        // int mid = (high+low)/2;

        // while(low<=high){
        //     if(nums[mid] == target) {ans= mid;}
        //     else if (nums[mid] > target) {high = mid-1;}
        //     else{ low= mid+1;}
        // }
        // return ans;


        // for(int i=0; i< nums.size(); i++){
        //     if(nums[i] == target){
        //         return i;
        //     }
        // }
        // return -1;




        int low = 0;
        int high = nums.size() - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] == target) return mid;
            if((target < nums[mid] && target < nums[high] && nums[high] > nums[mid]) || (nums[mid] < nums[high] && target > nums[high] && target > nums[mid]) || (nums[mid] > nums[high] && target < nums[mid] && target > nums[high])){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return -1;
    }
};