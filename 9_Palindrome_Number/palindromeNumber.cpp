class Solution {
public:
    bool isPalindrome(int x) {
        if(x==0) return true;
        if(x<0 || x%10==0) return false;
        long long rev=0;
        for(int t=x;t>0;t/=10) rev=(rev*10)+(t%10);
        return x==int(rev);
    }
};