class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt1=0,cnt2=0;
        int elem1=INT_MIN,elem2=INT_MIN;
        vector<int>res;
        for(int i=0;i<n;i++){
            if(cnt1==0 && nums[i]!=elem2){
                cnt1++;
                elem1=nums[i];
            }
            else if(cnt2==0 && nums[i]!=elem1){
                cnt2++;
                elem2=nums[i];
            }
            else if(elem1==nums[i]) cnt1++;
            else if(elem2==nums[i]) cnt2++;
            else cnt1-- && cnt2--;
        }
        cnt1=0;
        cnt2=0;
        for(int i=0;i<n;i++){
            if(elem1==nums[i]) cnt1++;
            if(elem2==nums[i]) cnt2++;
        }
        if(cnt1>(n/3)) res.push_back(elem1);
        if(cnt2>(n/3)) res.push_back(elem2);
        return res;
    }
};