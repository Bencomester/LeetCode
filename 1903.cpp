class Solution {
public:
    string largestOddNumber(string& num) {
        int i;
        for (i = num.length() - 1; i >= 0; i--) if ((num[i] - '0') % 2) break;
        return num.substr(0, i + 1);
    }
};
