class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int summ=0;
        int cnt=0;
        for(int i=0 ; i<arr.size() ; i++){
            int sum=0;
            for(int j=i ; j<arr.size() ; j++){
                cnt++;
                sum+=arr[j];
                if(cnt%2==1){
                    summ+=sum;
                }
            }
            cnt=0;
        }
        return summ;
    }
};