class Solution {
public:
    string countAndSay(int n) {
        string str = "1";
        for (int i = 1; i < n; i++) str = RLE(str);
        return str;
    }

    string RLE(string str) {
        int len = str.length();
        char last = str[0];
        string result = "";
        int count = 1;
        for (int i = 1; i < len; i++) {
            if (str[i] == last) count++;
            else {
                result += to_string(count) + last;
                count = 1;
                last = str[i];
            }
        }
        result += to_string(count) + last;
        return result;
    }
};
