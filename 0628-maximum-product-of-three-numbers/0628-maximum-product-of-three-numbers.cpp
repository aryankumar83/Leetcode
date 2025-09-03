class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        if(nums[0] >0){
            return nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        }
        else{
            int ma1 = nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
            int ma2 = nums[0]*nums[1]*nums[nums.size()-1];
            return max(ma1,ma2);
        }
        return 0;
    }
};