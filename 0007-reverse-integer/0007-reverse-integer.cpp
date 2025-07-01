class Solution {
public:
    int reverse(int x) {
        int copy = x;
        long long rev = 0;
        while(copy){
            int dig = copy%10;
            rev= rev*10+dig;
            copy/=10;
        }
        if(rev > pow(2,31)-1 || rev < pow(-2,31)) return 0;
        return rev;
    }
};