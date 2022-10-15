int dp[101][27][101][101];
class Solution {
public:
        
        string s;
        int find(int ind,int len,int prev,int k){
                if(k<0){
                        return INT_MAX;
                }
                if(ind>=s.size()){
                        return 0;
                }
                if(dp[ind][prev][len][k]!=-1){
                        return dp[ind][prev][len][k];
                }
                int del=find(ind+1,len,prev,k-1);
                int keep=0;
                if(s[ind]-'a'==prev){
                        if(len==1 || len==9 || len==99){
                                keep+=1;
                        }
                        keep=keep+find(ind+1,len+1,prev,k);
                }else{
                        keep=1+find(ind+1,1,s[ind]-'a',k);
                }
                 dp[ind][prev][len][k]= min(keep,del);
                return dp[ind][prev][len][k];
        }
    int getLengthOfOptimalCompression(string s, int k) {
            this->s=s;
            memset(dp, -1, sizeof(dp));
            return find(0,0,26,k);
        
    }
        
};
