class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        long long minus = 0;
        for(int i=0 ; i<timeSeries.size()-1 ; i++){
            if(timeSeries[i] + duration > timeSeries[i+1]){
                minus += timeSeries[i] + duration - timeSeries[i+1];
            }
        }
        long long ans = timeSeries.size() * duration;
        int final = ans-minus;
        return final;
    }
};