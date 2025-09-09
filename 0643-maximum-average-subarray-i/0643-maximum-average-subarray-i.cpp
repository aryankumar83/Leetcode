class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0.00 ;
        double maxi = INT_MIN;
        for(int i=0;i<k ; i++){
            sum+=nums[i];
        }
        for(long long i=k ; i<nums.size() ; i++){
            maxi = max(sum,maxi);
            sum += (nums[i] - nums[i-k]);
        }
        return max(maxi/k,sum/k);
    }
};