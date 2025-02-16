class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int p=0, i=0;
        while(i<s.size()){
            if((i==0 && isspace(s[i])) || (i==s.size()-1 && isspace(s[i]))||( isspace(s[i]) && isspace(s[i+1]))){
                s.erase(s.begin()+i);
                continue;
            }
            if(isspace(s[i])){
                reverse(s.begin()+p, s.begin()+i);
                p=i+1;
            }
            i++;
        }
        reverse(s.begin()+p, s.end());
        return s;
    }
};
