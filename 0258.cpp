class Solution {
public:
    int addDigits(int num) {
        if (num / 10 == 0) return num;
        long n = 0;
        for (int i = 1; num > 0; i++) {
            n += num % 10;
            num /= 10;
        }
        return addDigits((int) n);
    }
};