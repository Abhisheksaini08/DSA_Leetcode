class Solution {
public:
    bool checkString(string s) {
        int n=s.length();
        bool found = false;

        for(int i=0;i<n;i++){
            if(s[i]=='b'){
                found=true;
            }
            if(s[i]=='a' && found){
                return false;
            }
        }
        return true;
    }
};