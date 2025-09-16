class Solution {
public:
    bool is_prime(int n){
        for(int i=2 ; i<n ; i++){
            if(n%i == 0)return false;
        }
        if(n==1)return false;
        return true;
    }

    bool checkPrimeFrequency(vector<int>& nums) {
        map<int,int> m;
        for(int i : nums){
            m[i]++;
        }
        for(auto i : m){
            if(is_prime(i.second))return true;
        }
        return false;
    }
};