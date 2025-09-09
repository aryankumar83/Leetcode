class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int ans = INT_MAX;
        map<int,int> m;
        for(int i=0 ; i<nums.size() ; i++){
            m[nums[i]]++;
        }
        int sec = INT_MIN;
        int fir;
        for(auto i : m){
            if(i.second > sec){
                sec = i.second;
                fir = i.first;
            }
        }
        vector<int> s;
        for(auto i : m){
            if(i.second == sec){
                s.push_back(i.first);
            }
        }
        int i;
        for(int j=0 ; j<s.size() ; j++){
        for(i=0 ; i<nums.size() ; i++){
            if(nums[i] == s[j]){
                break;
            }
        }
        int k;
        for(k=nums.size()-1 ; k>=0 ; k--){
            if(nums[k] == s[j]){
                break;
            }
        }
        ans = min(ans,k+1-i);
        }
        return ans;
    }
};