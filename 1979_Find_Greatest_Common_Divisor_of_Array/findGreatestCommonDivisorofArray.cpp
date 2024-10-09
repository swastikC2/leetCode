class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int smallest=nums[0],largest=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<smallest) smallest=nums[i];
            if(nums[i]>largest) largest=nums[i];
        }
        if(smallest==1) return 1;
        if(smallest==largest) return largest;
        int greatest=1;
        for(int i=2;i<=smallest;i++){
            if(smallest%i==0 && largest%i==0) greatest=max(greatest,i);
        }
        return greatest;
    }
};