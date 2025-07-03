class Solution {
public:
    char kthCharacter(int k) {
        string s = "a";
        int l = 1;
        while (l < k) {
            for (int i = 0; i < l; i++) s += (s[i] == 122 ? 'a' : (char) s[i] + 1);
            l = s.length();
        }
        return s[k - 1];
    }
};
