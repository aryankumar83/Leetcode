class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> v;
        for(int i=0 ; i<mat.size() ; i++){
            int sum=0;
            for(int j=0 ; j<mat[0].size() ; j++){
                sum+=mat[i][j];
            }
            v.push_back(sum);
        }
        vector<int> out;
        for(int i=0 ; i<v.size() ; i++){
            int mini = *min_element(v.begin() , v.end());
            for(int j=0 ; j<v.size() ; j++){
                if(v[j] == mini){
                    out.push_back(j);
                    v[j] = INT_MAX;
                }
            }
        }
        vector<int> final;
        for(int i=0 ; i<k ; i++){
            final.push_back(out[i]);
        }
        return final;
    }
};