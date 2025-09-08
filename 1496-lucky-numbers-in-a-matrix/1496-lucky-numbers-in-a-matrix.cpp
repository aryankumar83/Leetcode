class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int>v;
        for(int i=0 ; i<matrix.size() ; i++){
            int mini=INT_MAX;
            int l;
            for(int j=0 ; j<matrix[0].size() ; j++){
                if(matrix[i][j] < mini){
                    mini = matrix[i][j];
                    l = j;
                }
            }
            int maxi=INT_MIN;
            for(int k=0 ; k<matrix.size() ; k++){
                if(matrix[k][l] > maxi)maxi = matrix[k][l];
            }
            if(mini == maxi){
                v.push_back(mini);
            }
        }
        return v;
    }
};