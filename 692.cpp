struct cmp{
        bool operator() (pair<int,string> &a,pair<int,string> &b){
                // if(a.first!=b.first){
                //         return a.first<b.first;
                // }else{
                //         return a.second>b.second;
                // }
                if(a.first == b.first) return a.second < b.second;
      
      return a.first > b.first;
        }
        
};

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
            
            map<string,int> m; // string with frequency
            vector<string> ans;
            for(int i=0;i<words.size();i++){
                    m[words[i]]++;
            }
            // 
        priority_queue< pair<int,string>,vector<pair<int,string>>,cmp> minh;
         
            for(auto it:m){
                    minh.push({it.second,it.first});
                    if(minh.size()>k)
                            minh.pop();
            }
           
            while(minh.size()!=0){
                  ans.push_back(minh.top().second); 
                    minh.pop();
            }
                        
            reverse(ans.begin(),ans.end());
            return ans;
            
        
    }
};
