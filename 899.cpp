class Solution {
public:
    string orderlyQueue(string s, int k) {
            
            if(k==1){
                    string ans=s;
                    string x=s+s;
                    
                    int n=s.size();
                    
                    for(int i=0;i<n;i++){
                            string temp=x.substr(i,n);
                            if(ans>temp){
                                    ans=temp;
                            }
                    }
                    return ans;
                   
            }
            string g=s;
            sort(g.begin(),g.end());
            return g;
        
    }
};
