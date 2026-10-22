class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for (int i = 2; i <= n - 2; i++) {
            if (!palindromic(convert(n, i))) return false;
        }
        return true;
    }

    string convert(int n, int base) {
        if (base == 10) return to_string(n);
        string str = "";
        while (n > 0) {
            str = to_string(n % base) + str;
            n /= base;
        }
        return str;
    }

    bool palindromic(string str) {
        int len = str.length();
        for (int i = 0; i < len; i++) {
            if (str[i] != str[len - i - 1]) return false;
        }
        return true;
    }
};
