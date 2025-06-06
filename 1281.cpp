class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;
        while (n > 0) {
            int i = n % 10;
            n /= 10;
            prod *= i;
            sum += i;
        }
        return prod - sum;
    }
};
