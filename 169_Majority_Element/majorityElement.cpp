class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int elem;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                count=1;
                elem=nums[i];
            }
            else if(elem==nums[i]) count++;
            else count--;
        }
        count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==elem) count++;
        }
        if(count>nums.size()/2) return elem;
        else return -1;
    }
};