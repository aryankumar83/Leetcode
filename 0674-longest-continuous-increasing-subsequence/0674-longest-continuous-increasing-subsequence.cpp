class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int ans=1;
        for (int i=0 ; i<nums.size() ; i++){
            int cnt=1;
            for (int j=i ; j<nums.size()-1 ; j++){
                if(nums[j] < nums[j+1])cnt++;
                ans = max(ans,cnt);
                if(nums[j]>=nums[j+1])break;
            }
        }
        return ans;
    }
};