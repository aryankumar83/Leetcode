class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a=-1;
        int b=-1;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i] == target)a=i;
            if(nums[nums.size()-1-i] == target)b=nums.size()-1-i;
        }
        return {b,a};
    }
};