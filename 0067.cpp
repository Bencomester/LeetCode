class Solution {
public:
    string addBinary(string a, string b) {
        int len = max(a.length(), b.length());
        bool remainder = false;
        string sum = "";
        for (int i = 0; i < len; i++) {
            bool x = bitAt(a, i);
            bool y = bitAt(b, i);
            string s = "0";
            if (remainder) {
                if (x && y) s = "1";
                else if (x || y) s = "0";
                else {
                    remainder = false;
                    s = "1";
                }
            } else {
                if (x && y) {
                    s = "0";
                    remainder = true;
                }
                else if (x || y) s = "1";
                else s = "0";
            }
            sum = s + sum;
        }
        if (remainder) sum = "1" + sum;
        return sum;
    }

    bool bitAt(string str, int i) {
        i = str.length() - i - 1;
        if (i < 0) return false;
        else if (str[i] == '1') return true;
        return false;
    }
};