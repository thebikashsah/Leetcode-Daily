class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
            int n=img1.size();
            
            vector<pair<int,int>> v1;
            vector<pair<int,int>> v2;
            
            for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                            if(img1[i][j]==1)
                                    v1.push_back({i,j});
                            if(img2[i][j]==1)
                                    v2.push_back({i,j});
                    }
            }
            
            int ans=0;
            map<pair<int,int>,int> m; // pair frequency
            for(auto it1:v1){
                    for(auto it2:v2){
                            int a=it1.first-it2.first;
                            int b=it1.second-it2.second;
                            m[{a,b}]++;
                            ans=max(ans,m[{a,b}]);
                    }
            }
            
            return ans;
        
    }
}:wq
-....
