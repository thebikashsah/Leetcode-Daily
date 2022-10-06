class TimeMap {
public:
        unordered_map<string,vector<pair<int,string>> > m;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
          m[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
           
            string ans="";
            
            
            
           int low=0;
           int high=m[key].size()-1;
            
            if(high==-1)
                    return ans;
            int mid;
            while(low<=high){
                     mid=low+(high-low)/2;
                    
                    
                    if(m[key][mid].first<=timestamp){
                            ans=m[key][mid].second;
                            low=mid+1;
                    }else{
                            high=mid-1;
                    }
            }
            // high--;
            // ans=m[key][low].second;
            // return ans;
            
            
            
            
            
            
            return ans;
            
        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
