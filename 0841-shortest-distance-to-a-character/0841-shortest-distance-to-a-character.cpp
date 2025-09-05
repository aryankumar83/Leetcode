class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v(s.size() , INT_MAX);
        for(int i=0 ; i<s.size() ; i++){
            if(s[i] == c){
                for(int j=0 ; j<i ; j++){
                    v[j] = min(v[j] , abs(i-j));
                }
                for(int j=i ; j<s.size() ; j++){
                    v[j] = min(v[j] , abs(i-j));
                }
            }
        }
        return v;
    }
};