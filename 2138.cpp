class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int len = s.length();
        vector<string> v;
        for (int i = 0; i < len; i += k) {
            string str = "";
            for (int j = i; j - i < k; j++) str += j < len ? s[j] : fill;
            v.push_back(str);
        }
        return v;
    }
};
