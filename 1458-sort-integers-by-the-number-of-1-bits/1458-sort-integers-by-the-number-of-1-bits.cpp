class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> vv;
        int maxi=0;
        for(int i=0 ; i<arr.size() ; i++){
            if(__builtin_popcount(arr[i]) > maxi)maxi = __builtin_popcount(arr[i]);
        }
        for(int i=0 ; i<=maxi ; i++){
            vector<int> v={};
            for(int j=0 ; j<arr.size() ; j++){
                if(__builtin_popcount(arr[j]) == i){
                    v.push_back(arr[j]);
                }
            }
            sort(v.begin(),v.end());
            vv.insert(vv.end(),v.begin() , v.end());
        }
        return vv;
    }
};