class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int remainder = 1;
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (remainder == 0) break;
            int sum = digits[i] + remainder;
            digits[i] = sum % 10;
            remainder = sum / 10;
        }
        if (remainder != 0) digits.insert(digits.begin(), remainder);
        return digits;
    }
};