class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        for (int i = 0; i < digits.length(); i++) {
            result = generate(result, getLetters(digits[i]));
        }
        return result;
    }

    string getLetters(char c) {
        switch(c) {
            case '2':
                return "abc";
            case '3':
                return "def";
            case '4':
                return "ghi";
            case '5':
                return "jkl";
            case '6':
                return "mno";
            case '7':
                return "pqrs";
            case '8':
                return "tuv";
            case '9':
                return "wxyz";
        }
        return "";
    }

    vector<string> generate(vector<string> v, string str) {
        vector<string> result;
        if (v.size() == 0) {
            for (int j = 0; j < str.length(); j++) {
                result.push_back(string() + str[j]);
            }
            return result;
        }
        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < str.length(); j++) {
                result.push_back(v[i] + str[j]);
            }
        }
        return result;
    }
};
