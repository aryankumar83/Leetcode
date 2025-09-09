class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string s1 = "qwertyuiopQWERTYUIOP";
        string s2 = "asdfghjklASDFGHJKL";
        string s3 = "zxcvbnmZXCVBNM";
        vector<string> v;
        for(int i=0 ; i <words.size() ; i++){
            int cnt1=0;
            int cnt2=0;
            int cnt3=0;
            for(int j=0 ; j<words[i].size() ; j++){
                for(int k=0 ; k<s1.size() ; k++){
                    if(words[i][j] == s1[k]){
                        cnt1++;
                    }
                }
                for(int k=0 ; k<s2.size() ; k++){
                    if(words[i][j] == s2[k]){
                        cnt2++;
                    }
                }
                for(int k=0 ; k<s3.size() ; k++){
                    if(words[i][j] == s3[k]){
                        cnt3++;
                    }
                }
            }
            if((cnt1==0 && cnt2==0) || (cnt1==0 && cnt3==0) || (cnt2==0 && cnt3==0)){
                v.push_back(words[i]);
            }
        }
        return v;
    }
};