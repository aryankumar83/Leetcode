class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int line=0;
        int w=0;
        for(int i=0 ; i<s.size() ; i++){
            w+=widths[(int)s[i]-97];
            if(w > 100){
                line++;
                w=0;
                w+=widths[(int)s[i]-97];
            }if(w==100){
                line++;
                w=0;
            }
        }
        int wll = w%100;
        if(wll>0)line++;
        if(wll==0)wll = 100;
        return {line,wll};
    }
};