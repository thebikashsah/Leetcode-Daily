class Solution {
public:
        int to_int(string x){
                int n=0;
                for(int i=0;i<x.size();i++){
                        int k= x[i]-48;
                        n=n*10+k;
                }
                return n;
        }
    int maximum69Number (int num) {
            
            string x=to_string(num);
            
            string y="";
            bool flag=true;
            for(int i=0;i<x.size();i++){
                    if(x[i]=='6' && flag==true){
                            flag=false;
                            y+='9';
                    }else{
                            y+=x[i];
                    }
            }
            cout<<y;
            
            return to_int(y);
            
            
            

        
    }
};
