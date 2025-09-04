class Solution {
public:

    int bin_search(vector<int> nums , int target , int l , int r , int mid){
        if(l>r)return -1;
        mid = (l+r)/2;
        if(target == nums[mid])return mid;
        if(nums[mid] > target)r = mid-1;
        else l = mid+1;
        return bin_search(nums , target , l , r , mid);
    }

    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int mid=(l+r)/2;
        return bin_search(nums , target , l , r , mid);
    }
};