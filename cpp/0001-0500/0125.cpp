class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        
        while (i < j) {
            while (!allowed(s[i]) && i < j) i++;
            while (!allowed(s[j]) && i < j) j--;

            if (tolower(s[i++]) != tolower(s[j--])) return false;
        }
        return true;
    }

    bool allowed(char c) {
        string chars = "abcdefghijklmnopqrstuvwxyz0123456789";
        return chars.find(tolower(c)) != string::npos;
    }
};