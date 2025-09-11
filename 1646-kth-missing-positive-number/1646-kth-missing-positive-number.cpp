class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> v;
        for(int i=1 ; i<=(arr.size() + k) ; i++){
            v.push_back(i);
        }
        for(int i=0 ; i<arr.size() ; i++){
            int j=0;
            while(j<v.size()){
                if(arr[i] == v[j]){
                    v.erase(v.begin()+ j);
                    j--;
                }
                j++;
            }
        }
        return v[k-1];
    }
};