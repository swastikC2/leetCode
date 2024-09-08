class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pt;
        for(int row=1;row<=numRows;row++){
            long long ans=1;
            vector<int> ansRow;
            ansRow.push_back(ans);
            for(int col=1;col<row;col++){
                ans=ans*(row-col);
                ans/=col;
                ansRow.push_back(ans);
            }
            pt.push_back(ansRow); 
            ansRow.clear();
        }
        return pt;
    }
};

/* 
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pt;
        for(int i=0;i<numRows;i++){
            vector<int> v(i+1,1);
            for(int j=1;j<i;j++){
                v[j]=pt[i-1][j]+pt[i-1][j-1];
            }
            pt.push_back(v);
        }
        return pt;
    }
};
*/