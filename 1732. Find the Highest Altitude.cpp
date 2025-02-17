class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int calt=0;
        int malt=0;

        for(int i =0; i<gain.size();i++){
            calt += gain[i];
            malt = max(calt, malt);
        }
        return malt;
        // vector<int> alt;
        // alt.push_back(0);
        // for(int i =0; i<gain.size();i++ ){
        //     alt.push_back(alt[i]+ gain[i]);
        //     cout<<alt[i];
        // }
        // int maxalt = *max_element(alt.begin(),alt.end());
        // return maxalt;
    }
};
