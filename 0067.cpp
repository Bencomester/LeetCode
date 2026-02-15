class Solution {
public:
    string addBinary(string a, string b) {
        const short al = a.length();
        const short bl = b.length();
        const short len = max(al, bl);
        bool remainder = false;
        string sum(len, '0');
        for (short i = 0; i < len; i++) {
            const bool x = al >= i + 1 && a[al - i - 1] == '1';
            const bool y = bl >= i + 1 && b[bl - i - 1] == '1';
            bool one = false;
            if (remainder) {
                if (x && y) one = true;
                else if (!x && !y) {
                    remainder = false;
                    one = true;
                }
            } else {
                if (x && y) remainder = true;
                else if (x || y) one = true;
            }
            if (one) sum[len - i - 1] = '1';
        }
        if (remainder) sum = "1" + sum;
        return sum;
    }
};
