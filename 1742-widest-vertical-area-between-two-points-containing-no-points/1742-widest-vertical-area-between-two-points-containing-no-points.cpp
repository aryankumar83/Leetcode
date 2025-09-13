class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        set<int> s;
        for(int i=0 ; i<points.size() ; i++){
            s.insert(points[i][0]);
        }
        int maxdif=0;
        vector<int> v;
        for(auto i : s){
            v.push_back(i);
        }
        for(int i=0 ; i<v.size()-1 ; i++){
            if(v[i+1]-v[i] > maxdif)maxdif = v[i+1]-v[i];
        }
        return maxdif;
    }
};