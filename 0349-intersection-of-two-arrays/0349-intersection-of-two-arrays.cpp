class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        vector<int> ans;
        set<int> s;
        for(int i=0 ; i<nums1.size() ; i++){
            for(int j=0 ; j<nums2.size() ; j++){
                if(nums1[i] == nums2[j])v.push_back(nums1[i]);
            }
        }
        for(int i=0 ; i<v.size() ; i++){
            s.insert(v[i]);
        }
        for(auto i : s){
            ans.push_back(i);
        }
        return ans;
    }
};