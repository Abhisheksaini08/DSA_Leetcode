class Solution {
public:
    int minimumMoves(string s) {
        int a=s.length();
        int ans=0;
        for(int i=0;i<a;i++){
            if(s[i]=='X'){
                ans++;
                i+=2;
            }
        }
        return ans;
    }
};