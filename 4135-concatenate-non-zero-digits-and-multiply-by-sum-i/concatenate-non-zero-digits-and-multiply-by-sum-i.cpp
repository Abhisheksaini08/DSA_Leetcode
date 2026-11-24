class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        long long sum=0;
        long long num=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!='0'){
                int d=s[i]-'0';

                sum+=d;
                num=num*10+d;
            }
         }
          return num*sum;  
    }
};