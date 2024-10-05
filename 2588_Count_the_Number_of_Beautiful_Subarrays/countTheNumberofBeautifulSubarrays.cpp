class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        long long res=0, pre=0;
        unordered_map<long long, long long>mpp;
        mpp[0]++;
        for(int i=0;i<nums.size();i++){
            pre=pre^nums[i];
            if(mpp[pre]) res+=mpp[pre];
            mpp[pre]++;
        }
        return res;
    }
};