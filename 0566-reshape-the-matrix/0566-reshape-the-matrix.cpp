class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> v;
        vector<int> t;
        for(int i=0 ; i<mat.size() ; i++){
            for(int j=0 ;j<mat[0].size() ; j++){
                v.push_back(mat[i][j]);
            }
        }
        if(r*c != v.size())return mat;
        vector<vector<int>> reshape;
        int k=0;
        for(int i = 0 ; i<r ; i++){
            for(int j=0 ; j<c ; j++){
                t.push_back(v[k]);
                k++;
            }
            reshape.push_back(t);
            t={};
        }
        return reshape;
    }
};