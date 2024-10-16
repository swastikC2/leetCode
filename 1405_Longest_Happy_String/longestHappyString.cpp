class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        int n = a+b+c;
        int ca=0,cb=0,cc=0;
        string res="";
        for(int i=0;i<n;i++){
            if((a>=b && a>=c && ca!=2) || (cb==2 && a>0) || (cc==2 && a>0)){
                res+='a';
                a--;
                ca++;
                if(cb==2) cb=0;
                if(cc==2) cc=0;
            }
            else if((b>=a && b>=c && cb!=2) || (ca==2 && b>0) || (cc==2 && b>0)){
                res+='b';
                b--;
                cb++;
                if(ca==2) ca=0;
                if(cc==2) cc=0;
            }
            else if((c>=a && c>=b && cc!=2) || (cb==2 && c>0) || (ca==2 && c>0)){
                res+='c';
                c--;
                cc++;
                if(ca==2) ca=0;
                if(cb==2) cb=0;
            }
            else break;
        }
        return res;
    }
};