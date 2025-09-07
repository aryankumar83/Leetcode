class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<string> vv = {"000","000","000"};
        int c=-1;
        for(int i=0 ; i<moves.size() ; i++){
            for(int j=0 ; j<3 ; j++){
                for(int k=0 ; k<3 ; k++){
                    if(i%2==0){
                        c=0;
                        vv[moves[i][0]][moves[i][1]] = 'X';
                    }
                    else{
                        c=1;
                        vv[moves[i][0]][moves[i][1]] = 'O';
                    }
                    if(vv[0] == "OOO" || vv[1] == "OOO" || vv[2] == "OOO" || 
                        (vv[0][0]=='O' && vv[1][1]=='O' && vv[2][2]=='O') || (vv[2][0]=='O' && vv[1][1]=='O' && vv[0][2]=='O') ||
                        (vv[0][0]=='O' && vv[1][0]=='O' && vv[2][0]=='O') || (vv[0][1]=='O' && vv[1][1]=='O' && vv[2][1]=='O') || (vv[0][2]=='O' && vv[1][2]=='O' && vv[2][2]=='O')){
                        return "B";
                    }
                    if(vv[0] == "XXX" || vv[1] == "XXX" || vv[2] == "XXX" || 
                       (vv[0][0]=='X' && vv[1][1]=='X' && vv[2][2]=='X') || (vv[2][0]=='X' && vv[1][1]=='X' && vv[0][2]=='X') ||
                       (vv[0][0]=='X' && vv[1][0]=='X' && vv[2][0]=='X') || (vv[0][1]=='X' && vv[1][1]=='X' && vv[2][1]=='X') || (vv[0][2]=='X' && vv[1][2]=='X' && vv[2][2]=='X')){
                        return "A";
                    }
                }
            }
        }
        /*
        if(moves.size()==8){
            for(int i=0 ; i<3 ; i++){
                for(int j=0 ; j<3 ; j++){
                    if(vv[i][j] == '0'){
                        if(c==1){
                            vv[i][j] = 'X';
                        }
                        else{
                            vv[i][j] = 'O';
                        }
                    }
                }
            }
        }
        for(int j=0 ; j<3 ; j++){
            for(int k=0 ; k<3 ; k++){
                if(vv[0] == "OOO" || vv[1] == "OOO" || vv[2] == "OOO" || 
                   (vv[0][0]=='O' && vv[1][1]=='O' && vv[2][2]=='O') || (vv[2][0]=='O' && vv[1][1]=='O' && vv[0][2]=='O')){
                    return "B";
                }
                if(vv[0] == "XXX" || vv[1] == "XXX" || vv[2] == "XXX" || 
                   (vv[0][0]=='X' && vv[1][1]=='X' && vv[2][2]=='X') || (vv[2][0]=='X' && vv[1][1]=='X' && vv[0][2]=='X')){
                    return "A";
                }
            }            
        }
        */
        if(moves.size()<9) return "Pending";
        return "Draw";
    }
};