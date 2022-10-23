class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
            
            vector<int> ans;
            
            int n=nums.size();// n=4
            // sort(nums.begin(),nums.end());
            vector<int> v(n+1,0);
            // 0 1 2 3 4
            
            for(int i=0;i<n;i++){
                    
                   v[nums[i]]++;
            }
            // 0 1 2 3 4
            // 0 1 2 0 1
            int twice=0;
            int missing=0;
            for(int i=1;i<=n;i++){
                    if(v[i]==0 )
                         missing=i;   
                        if(v[i]==2)
                                twice=i;
            }
            ans.push_back(twice);
            ans.push_back(missing);
            
            
            
            
            return ans;
        
    }
};
