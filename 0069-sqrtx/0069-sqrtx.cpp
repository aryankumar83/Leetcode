class Solution {
public:
    int mySqrt(int x) {
        int cnt=0;
        for(long long i=1 ; i*i<=x ; i++)cnt++;
        return cnt;
    }
};