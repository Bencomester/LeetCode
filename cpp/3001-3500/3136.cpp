class Solution {
public:
    bool isValid(string word) {
        if (word.length() < 3) return false;
        bool vowel = false;
        bool consonant = false;
        string letters = "abcdefghijklmnopqrstuvwxyz0123456789";
        string vowels = "aeiou";
        string consonants = "bcdfghjklmnpqrstvwxyz";
        for (char c : word) {
            if (letters.find(tolower(c)) == string::npos) return false;
            if (vowels.find(tolower(c)) != string::npos) vowel = true;
            if (consonants.find(tolower(c)) != string::npos) consonant = true;
        }
        return vowel && consonant;
    }
};
