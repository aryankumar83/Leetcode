class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sum_a=0;
        int sum_b=0;
        for(int i=0 ; i<aliceSizes.size() ; i++){
            sum_a+=aliceSizes[i];
        }
        for(int i=0 ; i<bobSizes.size() ; i++){
            sum_b+=bobSizes[i];
        }
        for(int i=0 ; i<aliceSizes.size() ; i++){
            for(int j=0 ;j<bobSizes.size() ; j++){
                if(sum_a - aliceSizes[i] + bobSizes[j]== sum_b - bobSizes[j] + aliceSizes[i])return {aliceSizes[i],bobSizes[j]};
            }
        }
        return {0,0};
    }
};