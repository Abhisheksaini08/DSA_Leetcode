class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int a=ransomNote.length();
        int b=magazine.length();
        int freq[26]={0};

        for(int i=0;i<b;i++){
            freq[magazine[i]-'a']++;
        }

        for(int i=0;i<a;i++){
            freq[ransomNote[i]-'a']--;

            if(freq[ransomNote[i]-'a']<0){
                return false;
            }
        }
    return true;
        
    }
};