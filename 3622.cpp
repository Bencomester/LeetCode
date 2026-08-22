class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int prod = 1;
        int num = n;
        while (num > 0) {
            int i = num % 10;
            sum += i;
            prod *= i;
            num /= 10;
        }
        return n % (sum + prod) == 0;
    }
};
