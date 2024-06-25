class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low =0, high = nums.size()-1;

        while(low<=high){
            int mid = (low+high)/2;
            if(target == nums[mid]) return true;
            else if((nums[mid] == nums[low]) && (nums[high] == nums[mid])){
                high--;
                low++;
                continue;
            }
            else if(nums[mid] >= nums[low] ){
                if(target <= nums[mid] && target >= nums[low]) {high = mid-1;}
                else{low = mid+1;}
            }
            else{
                if(target >= nums[mid] && target<= nums[high]){low = mid+1;}
                else{high = mid-1;}
            }
            
        }
        
        return false;
    }
};