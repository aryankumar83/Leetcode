class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        set<int> s;
        for(int i=0 ; i<n ; i++){
            s.insert(candyType[i]);
        }
        int cnt=0;
        for(auto i : s){
            cnt++;
        }
        return min(n/2 , cnt);
    }
};