class Solution {
public:
    long long minimumSteps(string s) {
        int n=s.length();
        int b=0;
        long long res=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') res+=b;
            else b++;
        }
        return res;
    }
};