class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        vector<int> v;
        int n = nums.size();
        set<int> s;
        for(int i=0 ; i<nums.size() ; i++){
            s.insert(nums[i]);
        }
        for(auto i : s){
            v.push_back(i);
        }
        if(v.size() == 1){
            for(int i=1 ; i<=n ; i++){
                if(i == v[0])continue;
                ans.push_back(i);
            }
            return ans;
        }
        if(v[0] >1){
            for(int i=1 ; i<v[0] ; i++){
                ans.push_back(i);
            }
        }
        for(int i=0 ; i<v.size()-1 ; i++){
            if(v[i]+1 < v[i+1]){
                for(int j=v[i]+1 ; j<v[i+1] ; j++){
                    ans.push_back(j);
                }
            }
        }
        if(v.back() < n){
            for(int i=v.back() +1 ; i<=n ; i++){
                ans.push_back(i);
            }
        }
        return ans;
    }
};