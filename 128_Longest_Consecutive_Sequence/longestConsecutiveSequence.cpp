class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int longest=1;
        int lastSmaller=INT_MIN;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1==lastSmaller){
                cnt+=1;
                lastSmaller=nums[i];
            }
            else if(nums[i]!=lastSmaller){
                cnt=1;
                lastSmaller=nums[i];
            }
            longest=max(longest,cnt);
        }
        return longest;
    }
};