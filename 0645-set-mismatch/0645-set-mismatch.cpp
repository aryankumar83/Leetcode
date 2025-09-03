class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int> m;
        vector<int> v;
        int sum1=0 , sum2=0;
        for(int i=0 ; i<nums.size() ; i++){
            m[nums[i]]++;
            sum1 += i+1;
            sum2 += nums[i];
        }
        for(auto i : m){
            if(i.second == 2)v.push_back(i.first);
        }
        v.push_back(sum1-sum2+v[0]);
        return v;
    }
};