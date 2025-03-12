class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        int sign = 1;
        while (n != 0) {
            sum += (n % 10) * sign;
            n /= 10;
            sign *= -1;
        }
        return sign > 0 ? -sum : sum;
    }
};
