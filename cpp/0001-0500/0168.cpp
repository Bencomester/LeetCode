class Solution {
public:
    string convertToTitle(int columnNumber) {
        string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        long j = 1;
        int i = 1;
        long c = columnNumber;
        for (; c > 0; i++) {
            j *= 26;
            c -= j;
        }
        c += j;
        string col = "";
        vector<int> index = convertTo26(c - 1, i - 1);
        for (int i = 0; i < index.size(); i++) {
            col += letters[index[i]];
        }
        return col;
    }

    vector<int> convertTo26(int n, int i) {
        vector<int> digits;
        for (; i > 0; i--) {
            digits.insert(digits.begin(), n % 26);
            n /= 26;
        }
        return digits;
    }
};