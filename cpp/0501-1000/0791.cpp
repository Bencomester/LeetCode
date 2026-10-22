class Solution {
public:
    string customSortString(string order, string s) {
        sort(s.begin(), s.end(), [&](int a, int b) { return comp(a, b, order); });
        return s;
        
    }

    bool comp(char a, char b, string o) {
            auto beg = o.begin();
            auto end = o.end();
            return find(beg, end, a) < find(beg, end, b);
    }
};
