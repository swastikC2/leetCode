class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int> res(n);
        for(int t=-1,i=n-1;i>=0;i--){
            res[i]=t;
            t=max(t,arr[i]);
        }
        return res;
    }
};