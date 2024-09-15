class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n,-1);
        for(int i=0;i<n;i++){
            if(temp[nums[i]]!=-1) return nums[i];
            else temp[nums[i]]=nums[i];
        }
        return 0;
    }
};