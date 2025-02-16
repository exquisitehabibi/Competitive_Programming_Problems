class Solution {
public:
    string reverseVowels(string s) {
        int swap;
        int i =0;
        int k = s.size()-1;

        while(i<k){
            if((s[i]=='A' || s[i]=='E'|| s[i]=='I' || s[i]=='O'|| s[i]=='U'
	        || s[i]=='a' || s[i]=='e'|| s[i]=='i' || s[i]=='o'|| s[i]=='u')
            &&
            (s[k]=='A' || s[k]=='E'|| s[k]=='I' || s[k]=='O'|| s[k]=='U'
	        || s[k]=='a' || s[k]=='e'|| s[k]=='i' || s[k]=='o'|| s[k]=='u')){
                char temp = s[k];
                s[k]= s[i];
                s[i]= temp;
                i++;
                k--;
            }
            else if(s[i]=='A' || s[i]=='E'|| s[i]=='I' || s[i]=='O'|| s[i]=='U'
	        || s[i]=='a' || s[i]=='e'|| s[i]=='i' || s[i]=='o'|| s[i]=='u'){
                k--;
            }
            else if(s[k]=='A' || s[k]=='E'|| s[k]=='I' || s[k]=='O'|| s[k]=='U'
	        || s[k]=='a' || s[k]=='e'|| s[k]=='i' || s[k]=='o'|| s[k]=='u'){
                i++;
            }
            else{
                i++;
                k--;
            }
        }
        
        return s;
        
    }
};
