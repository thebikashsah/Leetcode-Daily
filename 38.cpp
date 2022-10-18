class Solution {
public:
        string say(string s){
                int n=s.size();
                string x="";
                int count=1;
                for(int i=0;i<n;i++){
                        if(s[i]==s[i+1]){
                                count++;
                        }else{
                                if(i==n-2){
                                        x+=to_string(count)+s[i];
                                        x+=to_string(1)+s[i+1];
                                        return x;
                                }
                                
                             x=x+to_string(count)+s[i];
                                count=1;
                        }
                }
                cout<<x<<endl;
                return x;
                
        }
    string countAndSay(int n) {
            if(n==1){
                    return "1";
            }
            
            return say(countAndSay(n-1));
        
    }
};
