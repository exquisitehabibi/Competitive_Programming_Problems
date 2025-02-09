class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size()==0){return 0;}
        int count =0;
        int n = s.size();
        for(int i = n-1; i>=0;i--){
            char c = s[i];
            if(count == 0 && c ==' '){
                continue;
            }
            else if(c!=' '){
                count++;
            }
            else{
                break;
            }
        }
        return count;
        
    }
};
