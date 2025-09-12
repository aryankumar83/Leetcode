class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size() == 0)return {};
        string str = "";
        str+=to_string(nums[0]);
        vector<string> v;
        int cnt=0;
        for(int i=1 ; i<nums.size() ; i++){
            if(nums[i-1]+1 == nums[i]){
                cnt++;
            }
            else{
                if(cnt!=0){
                    str+="->";
                    str+=to_string(nums[i-1]);
                    cnt=0;
                }
                else{
                    //str+=nums[i];
                }   
                v.push_back(str);
                str = "";
                str+=to_string(nums[i]);
            }
            if(i == nums.size()-1 && cnt>0){
                str+="->";
                str+=to_string(nums[i]);
            } 
        }
        v.push_back(str);
        return v;
    }
};