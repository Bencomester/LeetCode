class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        int maxLen = 0;
        unordered_set<char> set;
        int left = 0;
        int right = 0;
        while (right < len) {
            if (set.contains(s[right])) {
                set.erase(s[left++]);
            } else {
                set.insert(s[right++]);
                maxLen = max(maxLen, right - left);
            }
        }
        return maxLen;
    }
};
