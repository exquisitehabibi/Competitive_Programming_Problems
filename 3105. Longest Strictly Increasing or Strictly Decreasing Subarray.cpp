class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int dec=1,inc=1;
        int maxd = 1;

        for(int i =0; i<n-1;i++){
            if(nums[i+1]>nums[i]){
                maxd = max(maxd, dec);
                dec=1;
                inc++;
            }
            if(nums[i+1]<nums[i]){
                maxd = max(maxd, inc);
                inc=1;
                dec++;
            }
            if(nums[i]==nums[i+1]){
                maxd = max(maxd,inc);
                maxd = max(maxd,dec);
                dec =1;
                inc =1;
            }
        }
        maxd = max(maxd,inc);
        maxd = max(maxd,dec);
        return maxd;
        
    }
};
