class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int len = garbage.size();
        int paper = -1;
        int glass = -1;
        int metal = -1;
        for (int i = len - 1; i >= 0; i--) {
            if (glass > -1 && paper > -1 && metal > -1) break;
            if (paper == -1 && garbage[i].contains('P')) paper = i;
            if (glass == -1 && garbage[i].contains('G')) glass = i;
            if (metal == -1 && garbage[i].contains('M')) metal = i;
        }

        int time = 0;
        for (string str : garbage) time += str.length();
        for (int i = 0; i < len - 1; i++) {
            if (i > max(paper, max(metal, glass))) break;
            if (i + 1 <= paper) time += travel[i];
            if (i + 1 <= metal) time += travel[i];
            if (i + 1 <= glass) time += travel[i];
        }
        return time;
    }
};
