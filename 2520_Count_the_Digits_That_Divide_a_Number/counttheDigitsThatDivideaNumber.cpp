class Solution {
public:
    int countDigits(int num) {
        int res=0;
        int temp=num;
        while(temp){
            int d=temp%10;
            if(d!=0 && num%d==0) res++;
            temp/=10;
        }
        return res;
    }
};