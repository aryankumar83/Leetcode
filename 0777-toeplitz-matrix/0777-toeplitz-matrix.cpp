class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int k=0 ; k<matrix[0].size() ; k++){
            vector<int> v = {};
            for(int i=0 ; i<matrix.size() ; i++){
                if(i+k < matrix[0].size())   v.push_back(matrix[i][i+k]);
            }
            if(v.size()>0 && *min_element(v.begin(),v.end()) != *max_element(v.begin(),v.end())){
                return false;
            }
        }
        for(int k=0 ; k<matrix.size() ; k++){
            vector<int> v = {};
            for(int i=0 ; i<matrix[0].size() ; i++){
                if(i+k < matrix.size())   v.push_back(matrix[i+k][i]);
            }
            if(v.size()>0 && *min_element(v.begin(),v.end()) != *max_element(v.begin(),v.end())){
                return false;
            }
        }
        return true;
    }
};