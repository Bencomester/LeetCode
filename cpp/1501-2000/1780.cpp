class Solution {
public:
    bool checkPowersOfThree(int n) {
        switch (n % 3) {
            case 1:
                return checkPowersOfThree(n - 1);
            case 0:
                if (n == 0) return true;
                return checkPowersOfThree(n / 3);
            default:
                return false;
        }
    }
};
