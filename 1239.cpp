class Solution {
public:
        int f(int i,int j,map<char,int> m,vector<string> &arr){
                
                if(i>j)
                        return 0;
                
                bool canChoose=true;
                for(auto it:arr[i]){
                        if(m.find(it)!=m.end()){
                                canChoose=false;
                                break;
                        }
                }
                map<char,int> freq;
                for(auto it:arr[i]){
                        freq[it]++;
                }
                if(freq.size()!=arr[i].size())
                        canChoose=false;

                if(canChoose==true){
                     // don't take
                        int ans1=f(i+1,j,m,arr);
                        //take
                        for(auto it:arr[i]){
                                m[it]++;
                        }
                        int ans2=arr[i].size()+f(i+1,j,m,arr);
                        
                        return max(ans1,ans2);
                }
                        return f(i+1,j,m,arr);

                        
                        
        }
    int maxLength(vector<string>& arr) {
        int n=arr.size();
            map<char,int> m;
            
            return f(0,n-1,m,arr);
    }
};
