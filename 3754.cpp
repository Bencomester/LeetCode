class Solution {
public:
    long long sumAndMultiply(int n) {
        int multiplier = 1;
        int x = 0;
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            n /= 10;
            if (!digit) continue;
            x += digit * multiplier;
            sum += digit;
            multiplier *= 10;
        }
        return (long) x * sum;
    }
};
