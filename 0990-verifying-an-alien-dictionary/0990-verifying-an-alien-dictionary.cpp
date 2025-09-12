class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int> m ;
        for(int i=0 ; i<order.size() ; i++){
            m[order[i]] = i;
        }
        for(int i=0 ; i<words.size()-1 ; i++){
            for(int j=0 ; j<words[i].size() ; j++){
                if(m[words[i][j]] < m[words[i+1][j]]){
                    break;
                }
                else if(m[words[i][j]] > m[words[i+1][j]]){
                    return false;
                }
                if(i+1 == words[i].size()-1){
                    if(words[i].size() > words[i+1].size())return false;
                }
            }
        }
        return true;
    }
};