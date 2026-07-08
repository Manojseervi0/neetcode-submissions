class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m=s1.size();
        int n=s2.size();
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        if (m > n)
            return false;
        for(int i=0;i<m;i++){
            freq1[s1[i]-'a']++;
        }
        for(int i=0;i<m;i++){
            freq2[s2[i]-'a']++;
        }
        if(freq1 == freq2)
            return true;
        for(int i=m;i<n;i++){
            freq2[s2[i]-'a']++;
            freq2[s2[i-m]-'a']--;
            if(freq1 == freq2)
                return true;        
                }
                return false;
    }
};
