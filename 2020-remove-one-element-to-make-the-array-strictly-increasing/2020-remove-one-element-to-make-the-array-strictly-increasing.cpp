class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        vector<int>temp = nums;
        for(int i=1 ; i<nums.size() ; i++){
            if(nums[i-1] >=nums[i]){
                nums.erase(nums.begin()+i-1);
                break;
            }
        }
        int flag=0;
        for(int i=1 ; i<nums.size() ; i++){
            if(nums[i-1]>=nums[i])flag=1;;
        }
        nums = temp;
        for(int i=1 ; i<nums.size() ; i++){
            if(nums[i-1] >=nums[i]){
                nums.erase(nums.begin()+i);
                break;
            }
        }
        int flag1=0;
        for(int i=1 ; i<nums.size() ; i++){
            if(nums[i-1]>=nums[i])flag1=1;;
        }
        if(flag==1 && flag1==1)return false;
        return true;
    }
};