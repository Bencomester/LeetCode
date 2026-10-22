class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> result;
        string s = "";
        for (string str : words) {
            s = "";
            for (char c : str) {
                if (c == separator) {
                    if (s != "") result.push_back(s);
                    s = "";
                } else s += c;
            }
            if (s != "") result.push_back(s);
        }
        return result;
    }
};
