class StockSpanner {
public:
    vector<pair<int,int>> v;
    StockSpanner() {
    }
    int next(int price) {
        if(v.empty()){
            v.push_back({price,1});
            return 1;
        }
        else if(v.back().first>price){
            v.push_back({price,1});
            return 1;
        }
        else {
            int s=1;
            while(!v.empty()&&v.back().first<=price){
                s+=v.back().second;
                v.pop_back();
            }
            v.push_back({price,s});
            return s;

        }
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */