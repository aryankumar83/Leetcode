class Solution {
public:

    int signFunc(int product){
        if(product>0)return 1;
        if(product<0)return -1;
        return 0;
    }
    int arraySign(vector<int>& nums) {
        int p=1;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i] < 0)p*=-1;
            if(nums[i] == 0)p=0;
        }
        return signFunc(p);
    }
};