class Solution {
public:
        int dp[301][11];
        
        int find(vector<int> &job,int ind,int d){
                if(d==1){
                        int maxi=INT_MIN;
                        for(int i=ind;i<job.size();i++){
                                maxi=max(maxi,job[i]);
                        }
                        return maxi;
                }
                if(dp[ind][d]!=-1){
                        return dp[ind][d];
                }
                int result=INT_MAX;
                int curMax=INT_MIN;
                
                for(int i=ind;i<=job.size()-d;i++){
                        curMax=max(curMax,job[i]);
                        result=min(result,curMax+find(job,i+1,d-1));
                }
                return dp[ind][d]=result;
        }
        
    int minDifficulty(vector<int>& jobDifficulty, int d) {
            // Partition array in d parts with min values
            int n=jobDifficulty.size();
            memset(dp, -1, sizeof(dp));
            if(n<d)
                    return -1;
            
            return find(jobDifficulty,0,d);
            
            
        
    }
};
