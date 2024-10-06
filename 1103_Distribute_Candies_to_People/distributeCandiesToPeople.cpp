class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int>res(num_people);
        int j=1;
        for(int i=0;candies>0;i++){
            if(i==num_people) i=0;
            if(candies>=j){
                res[i]+=j;
                candies-=j;
                j++;
            }
            else{
                res[i]+=candies;
                break;
            }
        }
        return res;
    }
};