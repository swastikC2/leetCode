class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int posIndex=0;
        int negIndex=1;
        vector<int>res(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                res[posIndex]=nums[i];
                posIndex+=2;
            } 
            else{
                res[negIndex]=nums[i];
                negIndex+=2;
            }
        }
        return res;
    }
};