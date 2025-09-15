class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> um;
        for(auto i: nums)um[i]++;
        sort(nums.begin() , nums.end() ,[&](int a,int b){
            if(um[a] != um[b])return um[a]<um[b];
            return b<a;
        });
        return nums;
    }
};