class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pt;
        for(int i=1;i<=numRows;i++){
            long long ans=1;
            vector<int> ansRow;
            ansRow.push_back(1);
            for(int j=1;j<i;j++){
                ans=ans*(i-j);
                ans/=j;
                ansRow.push_back(ans);
            }
            pt.push_back(ansRow); 
            ansRow.clear();
        }
        return pt;
    }
};