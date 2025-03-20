class Solution {
public:
    int distinctIntegers(int n) {
        return n < 2 ? 1 : n - 1;
    }
};
