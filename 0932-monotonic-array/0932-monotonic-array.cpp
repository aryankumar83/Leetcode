class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int flag=0;
        for(int i=0 ; i<nums.size()-1 ; i++){
            if(nums[i] >= nums[i+1]){

            }
            else flag=-1;
        }
        if(flag == 0)return true;
        flag = 0;
        for(int i=0 ; i<nums.size()-1 ; i++){
            if(nums[i] <= nums[i+1]){

            }
            else flag=-1;
        }
        if(flag == 0)return true;
        return false;
    }
};