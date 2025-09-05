class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> vs;
        for(int i=0 ; i<words.size() ; i++){
            string s = "";
            for(int j=0 ; j<words[i].size() ; j++){
                if(words[i][j] == 'a')s += ".-";
                else if(words[i][j] == 'b')s += "-...";
                else if(words[i][j] == 'c')s += "-.-.";
                else if(words[i][j] == 'd')s += "-..";
                else if(words[i][j] == 'e')s += ".";
                else if(words[i][j] == 'f')s += "..-.";
                else if(words[i][j] == 'g')s += "--.";
                else if(words[i][j] == 'h')s += "....";
                else if(words[i][j] == 'i')s += "..";
                else if(words[i][j] == 'j')s += ".---";
                else if(words[i][j] == 'k')s += "-.-";
                else if(words[i][j] == 'l')s += ".-..";
                else if(words[i][j] == 'm')s += "--";
                else if(words[i][j] == 'n')s += "-.";
                else if(words[i][j] == 'o')s += "---";
                else if(words[i][j] == 'p')s += ".--.";
                else if(words[i][j] == 'q')s += "--.-";
                else if(words[i][j] == 'r')s += ".-.";
                else if(words[i][j] == 's')s += "...";
                else if(words[i][j] == 't')s += "-";
                else if(words[i][j] == 'u')s += "..-";
                else if(words[i][j] == 'v')s += "...-";
                else if(words[i][j] == 'w')s += ".--";
                else if(words[i][j] == 'x')s += "-..-";
                else if(words[i][j] == 'y')s += "-.--";
                else if(words[i][j] == 'z')s += "--..";
            }
            vs.push_back(s);
        }
        set<string> st;
        for(int i=0 ; i<vs.size() ; i++){
            st.insert(vs[i]);
        }
        return st.size();
    }
};