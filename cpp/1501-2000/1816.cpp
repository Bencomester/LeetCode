class Solution {
public:
    string truncateSentence(string s, int k) {
        string str = "";
        int i = 0;
        while (k > 0) {
            if (i == s.length() || s[i] == ' ') k--;
            str += s[i++];
        }
        return str.substr(0, str.length() - 1);
    }
};
