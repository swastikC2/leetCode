class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int> mpp;
        mpp[0]=1;
        int preSum =0,count=0;
        for(int i=0;i<n;i++){
            preSum+=nums[i];
            int rem = preSum-k;
            count+=mpp[rem];
            mpp[preSum]++;
        }
        return count;
    }
};