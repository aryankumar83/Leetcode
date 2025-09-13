class Solution {
public:
    double trimMean(vector<int>& arr) {
        int five = (5*arr.size())/100;
        sort(arr.begin(),arr.end());
        double sum=0.00;
        for(int i=five ; i<arr.size()-five ; i++){
            sum+=arr[i];
        }
        return sum/(arr.size()-five-five);
    }
};