class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char,int> rN;
        unordered_map <char,int> mg;

        for(char c: magazine){
            mg[c]++;
        }

        for(char c: ransomNote){
            rN[c]++;
            if(rN[c]<=mg[c]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;

        
    }
};
