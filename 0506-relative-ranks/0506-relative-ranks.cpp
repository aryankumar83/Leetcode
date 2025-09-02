class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> s;
        vector<int> v = score;
        sort(v.begin() , v.end() , greater<int>());
        for(int i=0 ; i<score.size() ; i++){
            for(int j=0 ; j<v.size() ; j++){
                if(score[i] == v[j]){
                    if(j==0){
                        s.push_back("Gold Medal");
                    }
                    else if(j==1){
                        s.push_back("Silver Medal");
                    }
                    else if(j==2){
                        s.push_back("Bronze Medal");
                    }
                    else{
                        s.push_back(to_string(j+1));
                    }
                }
            }
        }
        return s;
    }
};