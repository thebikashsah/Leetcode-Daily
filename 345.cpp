class Solution {
public:
bool isVolwel(char c){
    if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U'){
            return true;
        }
        return false;
}
    string reverseVowels(string s) {

        string x="";
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]=='a' || s[i]=='A'|| s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')
            x+=s[i];
        }

        string ans="";
        int j=0;
        for(int i=0;i<n;i++){
            if(isVolwel(s[i])==true){
                ans+=x[j];
                j++;
            }else{
                ans+=s[i];
            }
        }

        return ans;
        
    }
};
