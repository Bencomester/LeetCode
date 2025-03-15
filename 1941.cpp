class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int offset = 97;
        vector<int> letters(26, 0);
        for (char c : s) letters[c - offset]++;
        for (int i = 0; i < letters.size(); i++) if (letters[i] == 0) letters.erase(letters.begin() + i--);
        for (int i = 0; i < letters.size() - 1; i++) if (letters[i] != letters[i + 1]) return false;
        return true;
    }
};
