class Solution {
public:
    int romanToInt(string s) {
        std :: unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10}, 
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int res=0;
        for(int i=0;i<s.size()-1;i++){
            res += roman[s[i]] < roman[s[i + 1]] ? -roman[s[i]] : roman[s[i]];
        }
        return res + roman.at(s.back());
    }
};