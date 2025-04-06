class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int cnt = 0;
        for (const auto& i : items) if (i[(ruleKey == "type" ? 0 : (ruleKey == "color" ? 1 : 2))] == ruleValue) cnt++;
        return cnt;
    }
};
