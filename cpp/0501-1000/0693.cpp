class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool r = n % 2;
        while (n > 0) {
            n /= 2;
            if (r == n % 2) return false;
            r = !r;
        }
        return true;
    }
};
