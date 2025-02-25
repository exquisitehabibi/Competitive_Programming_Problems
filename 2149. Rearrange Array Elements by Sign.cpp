class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res, pos, neg;
        for(int i : nums){
            if(i<0){
                neg.push_back(i);
            }
            else{
                pos.push_back(i);
            }
        }
        int j =0;
        while(j < pos.size() || j< neg.size()){
            if(j<pos.size()){
                res.push_back(pos[j]);
            }
            if(j<neg.size()){
                res.push_back(neg[j]);
            }
            j++; 
        }
        return res;
        
    }
};
