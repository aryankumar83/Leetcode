class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> ans;
        if(k>0){
            vector<int> v;
            v.insert(v.end() , code.begin() , code.end());
            v.insert(v.end() , code.begin() , code.end());
            for(int i=0 ; i<code.size() ; i++){
                int sum=0;
                for(int j=i+1 ; j<=i+k ; j++){
                    sum+=v[j];
                }
                ans.push_back(sum);
            }
        }
        else if(k==0){
            vector<int> vv(code.size());
            return vv;
        }
        else{
            vector<int> v;
            v.insert(v.end() , code.begin() , code.end());
            v.insert(v.end() , code.begin() , code.end());
            for(int i=0+code.size() ; i<v.size() ; i++){
                int sum=0;
                for(int j=i-1 ; j>=i+k ; j--){
                    sum+=v[j];
                }
                ans.push_back(sum);
            }
        }
        return ans;
    }
};