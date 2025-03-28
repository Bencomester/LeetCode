class Solution {
public:
    int getLucky(string s, int k) {
        string letters = "abcdefghijklmnopqrstuvwxyz";
        int sum = 0;
        for (char c : s) {
            int pos = distance(letters.begin() - 1, find(letters.begin(), letters.end(), c));
            while (pos != 0) {
                sum += pos % 10;
                pos /= 10;
            }
        }
        for (int i = 1; i < k; i++) {
            int temp = 0;
            while (sum != 0) {
                temp += sum % 10;
                sum /= 10;
            }
            sum = temp;
        }
        return sum;
    }
};
