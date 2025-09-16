class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int cnt=0;
        for(auto i : items){
            if("type" == ruleKey && i[0] == ruleValue)cnt++;
            else if("color" == ruleKey && i[1] == ruleValue)cnt++;
            else if("name" == ruleKey && i[2] == ruleValue)cnt++;
        }
        return cnt;
    }
};