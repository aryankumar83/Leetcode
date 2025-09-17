class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& b, vector<bool>& ia) {
        vector<pair<string,string>> vm;
        for(int i=0 ; i<code.size() ; i++){
            int flag=0;
            for(int j=0 ; j<code[i].size() ; j++){
                if((code[i][j] >= 'a' && code[i][j] <='z') || (code[i][j] >= 'A' && code[i][j] <='Z') || (code[i][j] >= '0' && code[i][j] <='9' || code[i][j] == '_')){

                }
                else{
                    flag=1;
                }
            }
            if(flag==0 && code[i]!="" && (b[i] == "electronics" || b[i]== "grocery" || b[i]=="pharmacy"|| b[i]== "restaurant") && ia[i] == true){
                vm.push_back({code[i],b[i]});
            }
        }
        sort(vm.begin(), vm.end(),[](const pair<string,string>& a, const pair<string,string>& b) {
        if (a.second != b.second) return a.second < b.second;
        return a.first < b.first;
        });
        vector<string> vs;
        for(auto i: vm){
            vs.push_back(i.first);
        }
        return vs;
    }
};