class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int maxi=0;
        for(int i=0 ; i<nums.size() ; i++){
            int sum=0;
            for(int j=i+1 ; j<nums.size() ; j++){
                if(nums[j]-nums[i]==1){
                    sum = j-i+1;
                }
            }
            maxi = max(maxi,sum);
        }
        return maxi;
    }
};