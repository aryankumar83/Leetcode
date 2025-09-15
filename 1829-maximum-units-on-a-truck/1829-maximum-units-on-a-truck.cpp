class Solution {
public:
    int maximumUnits(vector<vector<int>>& b, int t) {
        for(auto &i:b)swap(i[1],i[0]);
        sort(b.rbegin() , b.rend() );
        //reverse(b.begin() , b.end());
        int ans=0;
        for(auto i:b){
            ans += min(t , i[1])*i[0];
            t -= i[1];
            if(t<=0)break;
        }
        return ans;
    }
};