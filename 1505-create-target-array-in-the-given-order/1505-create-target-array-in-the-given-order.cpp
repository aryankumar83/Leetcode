class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> v = {};
        vector<int> c(nums.size() , 0);
        for(int i=0 ; i<index.size() ; i++){
            if(c[index[i]]==0 && v.size() <= index[i]){
                v.push_back(nums[index[i]]);
            }
            else{
                v.push_back(0);
                for(int j = v.size()-1 ; j>index[i] ; j--){
                    v[j] = v[j-1];
                }
                v[index[i]] = nums[i];
            }
            c[index[i]] = 1;
        }
        return v;
    }
};