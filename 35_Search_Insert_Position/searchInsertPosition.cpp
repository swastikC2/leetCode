class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        int res;
        if(target>nums[high]) return nums.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=target){
                res=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return res;
    }
};