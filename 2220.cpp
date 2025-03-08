class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;
        string a = bin(start);
        string b = bin(goal);
        int len = max(a.length(), b.length());
        for (int i = 0; i < len; i++) {
            char c1 = a.length() > i ? a[i] : '0';
            char c2 = b.length() > i ? b[i] : '0';
            if (c1 != c2) count++;
        }
        return count;
    }

    string bin(int a) {
        string str = "";
        while (a > 0) {
            str += to_string(a % 2);
            a /= 2;
        }
        return str;
    }
};
