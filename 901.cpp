class StockSpanner {
public:
        // vector<int> stock;
        // vector<int> ans;
        stack<pair<int,int>> s;
    StockSpanner() {
        
    }
    
//     int next(int price) {
//         stock.push_back(price);
            
//             for(int i=0;i<stock.size();i++){
//                     if(s.empty())
//                             ans.push_back(i+1);
//                     else if(s.top().first>stock[i])
//                             ans.push_back(i-s.top().second);
//                     else if(s.top().first<=stock[i]){
//                             while(!s.empty() && s.top().first<=price)
//                                     s.pop();
//                             if(s.empty())
//                                 ans.push_back(i+1);
//                             else
//                                ans.push_back(i-s.top().second);     
//                     }
//                     s.push({stock[i],i});
                            
//             }
//             return ans.back();
             int next(int price) {
        int res = 1;
        while (!s.empty() && s.top().first <= price) {
            res += s.top().second;
            s.pop();
        }
        s.push({price, res});
        return res;
    }
    
};

   

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
