class BrowserHistory {
public:
    vector<string> history;
    int pos = -1;
    BrowserHistory(string homepage) {
        visit(homepage);
    }
    
    void visit(string url) {
        history.erase(history.begin() + ++pos, history.end());
        history.push_back(url);
    }
    
    string back(int steps) {
        pos -= steps;
        if (pos < 0) pos = 0;
        return history[pos];
    }
    
    string forward(int steps) {
        pos += steps;
        int max = history.size() - 1;
        if (pos > max) pos = max;
        return history[pos];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
