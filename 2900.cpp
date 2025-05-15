class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> result1;
        short int len = words.size();
        bool zero = true;
        for (short int i = 0; i < len; i++) {
            if (groups[i] == zero) continue;
            result1.push_back(words[i]);
            zero = !zero;
        }

        vector<string> result2;
        zero = false;
        for (short int i = 0; i < len; i++) {
            if (groups[i] == zero) continue;
            result2.push_back(words[i]);
            zero = !zero;
        }

        return result1.size() > result2.size() ? result1 : result2;
    }
};
