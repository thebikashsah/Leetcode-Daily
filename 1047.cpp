class Solution {
public:
    string removeDuplicates(string s) {
            int n=s.size();
            for(int i=0;i<n;i++){
                    if(s[i]==s[i+1]){
                            s.erase(i,2);
                            i=max(-1,i-2);
                    }
            }
            return s;
        
    }
};
