class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>> v;
        for(int i=0 ; i<names.size() ; i++){
            v.push_back({names[i],heights[i]});
        }
        sort(v.begin(),v.end() , [](const pair<string,int>&p1 ,const pair<string,int>&p2){
            if(p1.second != p2.second)return p1.second>p2.second;
            return p1.first<p2.first;
        });
        vector<string> vs;
        for(int i=0 ; i<v.size() ; i++){
            vs.push_back(v[i].first);
        }
        return vs;
    }
};