class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sv ;
        if(nums[0]<=0)sv = abs(nums[0])+1;
        else sv=1;
        int sum=sv;
        for(int i=0 ; i<nums.size() ; i++){
            sum+=nums[i];
            if(sum<1){
                sv += abs(sum)+1;
                sum +=abs(sum)+1;
            }
        }
        return sv;
    }
};