class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& r) {
        vector<int> v;
        for(auto &i : r){
            v.push_back(min(i[0],i[1]));
        }
        int maxi = *max_element(v.begin() , v.end());
        int cnt=0;
        for(auto &i : v){
            if(i == maxi)cnt++;
        }
        return cnt;
    }
};