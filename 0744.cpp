class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char current = letters[0];
        for (const char& c : letters) if (c > target && (c < current || current <= target)) current = c;
        return current;
    }
};
