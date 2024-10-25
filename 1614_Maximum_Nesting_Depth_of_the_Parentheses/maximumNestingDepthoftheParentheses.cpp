class Solution {
public:
    int maxDepth(string s) {
        int maxInt=0;
        int count=0;
        for(auto c : s){
            if(c=='(') count++;
            else if(c==')'){
                maxInt=max(count,maxInt);
                count--;
            }
        }
        return maxInt;
    }
};