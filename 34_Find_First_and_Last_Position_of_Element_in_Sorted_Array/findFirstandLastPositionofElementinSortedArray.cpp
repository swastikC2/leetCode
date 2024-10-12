class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(lb==nums.size() || nums[lb]!=target) return {-1,-1};
        int ub = upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
        return {lb,ub};
    }
};

// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         vector<int>res={-1,-1};
//         int left = binarySearch(nums,target,true);
//         int right = binarySearch(nums,target,false);
//         res[0]=left;
//         res[1]=right;
//         return res;
//     }

//     int binarySearch(vector<int>& arr,int target, bool searchMore){
//         int low=0;
//         int high=arr.size()-1;
//         int idx=-1;
//         while(low<=high){
//             int mid=low+(high-low)/2;
//             if(arr[mid]>target) high=mid-1;
//             else if(arr[mid]<target) low=mid+1;
//             else
//             {
//                 idx=mid;
//                 if(searchMore) high=mid-1;
//                 else low=mid+1;
//             }
//         }
//         return idx;
//     }
// };