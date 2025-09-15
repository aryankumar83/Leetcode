class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)return false;
        if(n==1)return true;
        while(n){
            if(n%2 != 0)return false;
            if(n==2)return true;
            n=n/2;
        }
        return true;
    }
};