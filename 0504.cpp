class Solution {
public:
    string convertToBase7(int num) {
        string n = "";
        bool pos = num >= 0 ? true : false;
        if (num < 0) num = -num;
        while (num / 7 != 0 || num % 7 != 0) {
            n = to_string(num % 7) + n;
            num /= 7;
        }
        if (n == "") return "0";
        return pos ? n : "-" + n;
    }
};