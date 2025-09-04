class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = 0;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i] > nums[maxi]){
                maxi = i;
            }
        }
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]*2 > nums[maxi]){
                if(nums[i] == nums[maxi]){

                }
                else{
                    return -1;
                }
            }
        }
        return maxi;
    }
};