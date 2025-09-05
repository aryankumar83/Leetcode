class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() <3)return false;
        int j = -1;
        for(int i=0 ; i<arr.size()-1; i++){
            if(arr[i] < arr[i+1]){

            }
            else{
                j=i;
                break;
            }
        }
        if(j==-1 || j==0 || j==arr.size()-1)return false;
        for(int i=j ; i<arr.size()-1 ; i++){
            if(arr[i]> arr[i+1]){

            }
            else return false;
        }
        return true;
    }
};