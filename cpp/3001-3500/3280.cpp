class Solution {
public:
    string convertDateToBinary(string date) {
        return convert(date, 0, 4) + "-" + convert(date, 5, 2) + "-" + convert(date, 8, 2);
    }

    string convert(string str, int a, int b) {
        int n = stoi(str.substr(a, b));
        string bin = "";
        while (n > 0) {
            bin = to_string(n % 2) + bin;
            n /= 2;
        }
        return bin;
    }
};
