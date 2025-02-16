class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1 = word1.size();
        int w2 = word2.size();
        int i =0;
        string str;

        while(i<w1 || i<w2){

            if(i<w1 && i<w2){
                str+=word1[i];
                str+=word2[i];
            }
            else if(i>=w1 && i<w2){
                str+=word2[i];
            }
            else{
                str+=word1[i];
            }
            i++;
        }
        return str;
    }
};
