class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        int up=0;
        vector<int> kv;
        while(k){
            int dig = k%10;
            kv.push_back(dig);
            k/=10;
        }
        reverse(kv.begin(),kv.end());
        if(num.size()==1 && num[0]==0){
            return kv;
        }
        int j=kv.size()-1;
        for(int i=num.size()-1 ; i>=0 ; i--){
            int t = num[i];
            if(j>=0){
                num[i] = (num[i]+kv[j]+up)%10;
                up = (t+kv[j]+up)/10;
            }
            else{
                num[i] = (num[i]+up)%10;
                up = (t+up)/10;
            }
            if(up==0 && j<0)break;
            j--;
        }
        for(;j>=0 ; j--){
            num.insert(num.begin(),(kv[j]+up)%10);
            up= (kv[j]+up)/10;
        }
        if(up == 1){
            num.insert(num.begin(),1);
        }
        return num;
    }
};