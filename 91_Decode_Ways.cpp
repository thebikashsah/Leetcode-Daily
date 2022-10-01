class Solution {
public:
        
        int decode(string &s,int ind,int n,vector<int> &dp){
                if(ind<n && s[ind]=='0'){
                        return 0;
                }
                if(ind>=n)
                        return 1;
                
                int count=0;
                
                if(dp[ind]!=-1)
                        return dp[ind];
                
                //single
                count=decode(s,ind+1,n,dp);
                
                if((ind+1)<n && (s[ind]=='1' || ( (s[ind]=='2') && (s[ind+1]<'7') ) ) ){
                        count+=decode(s,ind+2,n,dp);
                }
                
                return dp[ind]=count;
                
        }
    int numDecodings(string s) {
            int n=s.size();
            vector<int> dp(n+1,-1);
            
            return decode(s,0,n,dp);
        
    }
};
