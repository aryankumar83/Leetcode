class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int odd=0;
        vector<vector<int>> v;
        for(int i=0 ; i<m ; i++){
            vector<int> vv = {};
            for(int j=0 ; j<n ; j++){
                vv.push_back(0);
            }
            v.push_back(vv);
        }
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                for(int k=0 ; k<indices.size() ; k++){
                    if( i == indices[k][0]){
                        v[i][j]++;
                    }
                    if( j == indices[k][1]){
                        v[i][j]++;
                    }
                }
            }
        }
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(v[i][j] %2 == 1)odd++;
            }
        }
        return odd;
    }
};