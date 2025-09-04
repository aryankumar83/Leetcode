class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        for(int i=0 ; i<bits.size() ; i=i+2){
            if(bits[i] == 1 && bits[i+1] == 1){
            }
            else if(bits[i] == 1 && bits[i+1] == 0){
                bits[i+1] = 1;
            }
            else if(bits[i] == 0){
                i--;
            }
        }
        if(bits[bits.size()-1] == 0)return true;
        return false;
    }
};