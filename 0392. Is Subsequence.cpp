class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(t.size()==0 && s.size()==0){ return true;}
        int n = t.size();
        int p = s.size();
        int j =0;
        for(int i=0;i<n;i++){
            if(t[i]==s[j]){
                j++;
            }
            if(j==p){
                return true;
            }
        }
        return false;
        
    }
};
