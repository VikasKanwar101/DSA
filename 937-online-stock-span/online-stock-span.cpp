class StockSpanner {
public:
    stack<pair<int, int>> s; // {price, ind}

    StockSpanner() {
        // Constructor
    }

    int next(int price) {
        int ind = 1;

        while (!s.empty() && s.top().first <= price) {
            ind += s.top().second;
            s.pop();
        }

        s.push({price, ind});
        return ind;
    }
};


/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */