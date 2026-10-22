class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string, int> map;
        bool mid = false;
        for (string s : words) {
            map[s]++;
        }
        int cnt = 0;
        for (auto item : map) {
            const string& str = item.first; 
            if (item.first[0] == item.first[1]) {
                if (item.second % 2 == 1) mid = true;
                cnt += item.second - item.second % 2;
            } else {
                string s = {str[1], str[0]};
                cnt += min(item.second, map[s]);
            }
        }

        return (cnt + mid) * 2;
    }
};
