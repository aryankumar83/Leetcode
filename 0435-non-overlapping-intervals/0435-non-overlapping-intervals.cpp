class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& in) {
        int ans=0;
        sort(in.begin() , in.end());
        for(int i=1 ; i<in.size() ; i++){
            if(in[i-1][1] > in[i][0]){
                in[i][1] = min(in[i-1][1],in[i][1]);
                ans++;
            }
        }
        return ans;
    }
};