class Solution {
public:
    bool isAnagram(string s, string t) {
       int counts[26]={0};
       for(char c:s){
        counts[c-'a']++;
       }
       for(char c:t){
        counts[c-'a']--;
       }
       bool allzero=true;
       for(int x: counts){
        if(x!=0){
            allzero=false;
            break;
        }
       }
       return allzero;
    }
};