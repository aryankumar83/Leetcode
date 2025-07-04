class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if(digits[n-1] !=9){
            digits[n-1]++; 
        }
        else{
            int flag=1;
            for(int i=n-1 ; i>=0 ; i--){
                if(digits[i] == 9){
                    digits[i] = 0;
                    flag=1;
                }
                else{
                    digits[i]++;
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                digits.insert(digits.begin(),1);
            }
        }
        return digits;
    }
};