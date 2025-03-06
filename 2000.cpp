class Solution {
public:
    string reversePrefix(string word, char ch) {
        auto i = find(word.begin(), word.end(), ch);
        if (i == word.end()) return word;
        reverse(word.begin(), i + 1);
        return word;
    }
};
