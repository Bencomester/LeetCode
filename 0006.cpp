class Solution {
public:
    string convert(string s, int numRows) {
        int cycle = numRows <= 2 ? numRows : numRows * 2 - 2;
        string str = "";
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < s.length() + i; j += cycle) {
                if (j - i >= 0) str += s[j - i];
                if (i != 0 && i != numRows - 1) {
                    if (j + i < s.length()) str += s[j + i];
                }
            }

        }
        return str;
    }
};
