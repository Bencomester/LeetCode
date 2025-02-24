class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        long num = 0;
        long power = 1;
        string b = binary(n);
        for (int i = 0; i < b.length(); i++) {
            if (i > 0) power *= 2;
            if (b[i] == '1') num += power;
        }
        return num;
    }

    string binary(uint32_t n) {
        string s = "";
        for (int i = 0; i < 32; i++) {
            s = to_string(n % 2) + s;
            n /= 2;
        }
        return s;
    }
};