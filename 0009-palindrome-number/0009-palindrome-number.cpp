class Solution {
public:
    bool isPalindrome(int x) {
        long long int rev=0;
        int copy_x = x;
        if(x<0) return false;
        while(x>0){
            int dig=x%10;
            rev=rev*10+dig;
            x/=10;
        }
        if(rev == copy_x)return true;
        return false;
    }
};