class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
            
            int n=plantTime.size();
            
            priority_queue<pair<int,int> > maxh;
            
            for(int i=0;i<n;i++){
                    maxh.push({growTime[i],i});
            }
            
            int grow=INT_MIN;
            int plant=0;
            
            while(maxh.size()!=0){
                    int gT=maxh.top().first;
                    int ind=maxh.top().second;
                    maxh.pop();
                    plant+=plantTime[ind];
                    grow=max(grow,plant+gT);
                    
            }
            
            return grow;
        
    }
};
