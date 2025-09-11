class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        vector<string> v1,v2;
        for(int i=0 ; i<paths.size() ; i++){
            v1.push_back(paths[i][0]);
            v2.push_back(paths[i][1]);
        }
        for(int i=0 ; i<v2.size() ; i++){
        int flag=0;
        for(int j=0 ; j<v1.size() ; j++){
            if(v2[i] == v1[j])flag=1;
        }
        if(flag == 0)return v2[i];
        }
        return "";
    }
};