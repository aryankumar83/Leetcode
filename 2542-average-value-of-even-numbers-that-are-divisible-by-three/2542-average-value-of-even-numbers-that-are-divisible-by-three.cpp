class Solution {
public:
    int averageValue(vector<int>& nums) {
        int cnt=0,sum=0;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]%6==0 ){
                cnt++;
                sum+=nums[i];
            }
        }
        if(cnt==0)return 0;
        return sum/cnt;
    }
};