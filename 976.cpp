class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
            // a+b>c , b+c>a , c+a>b
            // or a+b>c && a<=b<=c
            int n=nums.size();
            sort(nums.begin(),nums.end());
            
            // 1 5 8 9 12 13
            
            // 1 2 2
            
            for(int i=n-1;i>=2;i--){
                    if(nums[i]<nums[i-1]+nums[i-2]){
                            return nums[i]+nums[i-1]+nums[i-2];
                    }
                    
            }
            return 0;
        
    }
};
