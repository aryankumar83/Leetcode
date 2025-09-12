class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mini=INT_MAX , maxi=INT_MIN;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]>maxi)maxi=nums[i];
            if(nums[i]<mini)mini=nums[i];
        }
        mini +=k;
        maxi -=k;
        return max(maxi-mini , 0);
    }
};