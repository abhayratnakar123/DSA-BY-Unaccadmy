//IMPORTANT QUESTION --

class Solution {
public:
    vector<int> diffWaysToCompute(string str) {
        vector<int>v;
        for(int i=0;i<str.length();i++)
        {
            if(str[i] <='9' && str[i]>='0')
            continue;
            
            else{
                string a=str.substr(0,i);
                string b=str.substr(i+1);
                vector<int>v1=diffWaysToCompute(a);
                  vector<int>v2=diffWaysToCompute(b);
                
                for(auto x:v1){
                    for(auto y:v2)
                    {
                        if(str[i]=='-')
                            v.push_back(x-y);
                        if(str[i]=='+')
                            v.push_back(x+y);
                        if(str[i]=='*')
                            v.push_back(x*y);
                    }
                }
            }
}
         if(v.size()==0)
            v.push_back(stoi(str));
        
        return v;
    }
};