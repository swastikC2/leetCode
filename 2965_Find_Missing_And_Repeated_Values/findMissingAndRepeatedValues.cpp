class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>val(grid.size()*grid.size()+1,0);
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                val[grid[i][j]]++;
            }
        }
        int rep,mis;
        for(int i=0;i<grid.size()*grid.size()+1;i++){
            if(val[i]==2) rep=i;
            else if(val[i]==0) mis=i;
        }
        return {rep,mis};
    }
};