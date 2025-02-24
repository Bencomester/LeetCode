class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        for (int i = 0; i < strs[0].length(); i++) {
            char c = strs[0][i];
            bool br = false;
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j].length() == i || strs[j][i] != c) {
                    br = true;
                    break;
                }
            }
            if (br) break;
            prefix += c;
        }
        return prefix;
    }
};