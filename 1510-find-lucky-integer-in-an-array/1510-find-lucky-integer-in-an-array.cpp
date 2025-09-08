class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> m;
        int ln=-1;
        for(int i=0; i<arr.size() ; i++){
            m[arr[i]]++;
        }
        for(auto i: m){
            if(i.first == i.second){
                ln = i.first;
            }
        }
        return ln;
    }
};