class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int l = INT_MIN;
        int s;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i] > l){
                s = l;
                l = nums[i];
            }
            else if(nums[i] > s)s = nums[i];
        }
        return (l-1)*(s-1);
    }
};