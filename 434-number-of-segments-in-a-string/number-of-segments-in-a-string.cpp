class Solution {
public:
    int countSegments(string s) {
        int a=s.length();
        int count=0;
        int i=0;


        while(i<a){

            if(s[i]== ' '){
                i++;
                continue;
            }
            count++;

              while(i < a && s[i] != ' ') {
                i++;
            }

        }
        return count;
    }
};