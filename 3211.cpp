class Solution {
public:
    vector<string> validStrings(int n) {
        if (n == 1) return {"0" , "1"};
        vector<string> v;
        for (string str : validStrings(n - 1)) {
            if (str[0] == '1') v.push_back("0" + str);
            v.push_back("1" + str);
        }
        return v;
    }
};
