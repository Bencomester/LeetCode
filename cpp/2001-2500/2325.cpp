class Solution {
public:
    string decodeMessage(string key, string message) {
        string letters = " abcdefghijklmnopqrstuvwxyz";
        map<char, int> map = {{' ', 0}};
        int counter = 1;
        for (char c : key) if (map.find(c) == map.end()) map[c] = counter++;
        string result = "";
        for (char c : message) result += letters[map[c]];
        return result;
    }
};
