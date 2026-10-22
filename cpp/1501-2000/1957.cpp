class Solution {
public:
    string makeFancyString(string s) {
        char current = s[0];
        int cnt = 1;
        string str = "";
        str += s[0];
        int l = s.length();
        for (int i = 1; i < l; i++) {
            if (s[i] == current) cnt++;
            else {
                current = s[i];
                cnt = 1;
            }
            if (cnt < 3) str += s[i];
        }
        return str;
    }
};
