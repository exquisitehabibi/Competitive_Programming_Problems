class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int count=0;
        map <char,int> mp1;
        map <char,int> mp2;
        int n = s1.size();
        for(int i =0; i<n;i++){
            mp1[s1[i]]++;
            mp2[s2[i]]++;
            if(s1[i]!=s2[i]){
                count++;
            }
            if(count>2){ return false;}
        }
        if(count<=2 && mp1 == mp2){ return true;}
        return false;
    }
};
