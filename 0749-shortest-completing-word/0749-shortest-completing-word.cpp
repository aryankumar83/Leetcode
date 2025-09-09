class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        string s = "";
        for(int i=0 ; i<licensePlate.size() ; i++){
            if(licensePlate[i] >= 'a' && licensePlate[i]<='z' || licensePlate[i] >= 'A' && licensePlate[i]<='Z'){
                s+=licensePlate[i];
            }
        }
        transform(s.begin() , s.end() , s.begin() , ::tolower);
        string str;
        int wsize = INT_MAX;
        for(int i=0 ; i<words.size() ; i++){
            int cnt=0;
            string t = words[i];
            string st = s;
            for(int j=0 ; j<s.size() ; j++){
                
                for(int k=0 ; k<words[i].size() ; k++){
                    if(st[j] == t[k]){
                        cnt++;
                        t[k] = ' ';
                        st[j] = '*';
                    }
                }
                if(cnt == s.size() && wsize > words[i].size()){
                    str = words[i];
                    wsize = words[i].size();
                }
            }
        }
        return str;
    }
};