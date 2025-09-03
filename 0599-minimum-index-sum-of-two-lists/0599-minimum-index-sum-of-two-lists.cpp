class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int srt = INT_MAX;
        int diff =0;
        vector<string> vs;
        for(int i=0 ; i<list1.size() ; i++){
            for(int j=0 ; j<list2.size() ; j++){
                if(list1[i] == list2[j]){
                    diff = i+j;
                    if(diff <= srt){
                        srt = diff;
                    }
                }
            }
        }
        for(int i=0 ; i<list1.size() ; i++){
            for(int j=0 ; j<list2.size() ; j++){
                if(list1[i] == list2[j] && i+j == srt){
                    vs.push_back(list1[i]);
                }
            }
        }
        return vs;
    }
};