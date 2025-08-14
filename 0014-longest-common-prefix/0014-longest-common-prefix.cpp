class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {  
        int ans = strs[0].size();
        for(int i=0 ; i<strs.size()-1 ; i++){
            int cnt=0;
            int flag=0;

            for(int j=0 ; j<min(strs[i].size(),strs[i+1].size()) ; j++){
                if(strs[i][j] == strs[i+1][j] && flag==0)cnt++;
                else flag=1;
            }
            ans = min(ans,cnt);
        }
        string s = "";
        for(int i=0 ; i<ans ; i++ ){
            s+=strs[0][i];
        }
        return s;
    }
};