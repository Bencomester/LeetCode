class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        string s = string(n, '0');
        for (int i = 0; i < n + 1; i++) {
            if (find(nums.begin(), nums.end(), s) == nums.end()) break;
            s = add(s);
        }
        return s;
    }

    string add(string s) {
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '0') {
                s[i] = '1';
                break;
            } else {
                s[i] = '0';
            }
        }
        return s;
    }
};