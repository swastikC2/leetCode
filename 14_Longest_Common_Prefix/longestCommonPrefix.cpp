class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        sort(strs.begin(),strs.end());
        int n = strs.size();
        for(int i=0;i<min(strs[0].length(),strs[n-1].length());i++){
            if(strs[0][i]==strs[n-1][i]) res+=strs[0][i];
            else break;
        }
        return res;
    }
};