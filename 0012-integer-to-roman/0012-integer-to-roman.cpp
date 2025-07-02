class Solution {
public:
    string intToRoman(int num) {
        int copy = num;
        int p_value=log10(num)+1;
        int rev=0;
        string result = "";

        while(copy){
            int dig = copy%10;
            rev=rev*10 + dig;
            copy/=10;
        }
        copy = num;

        while(rev){
            int dig= rev%10;
            p_value--;
            int mul = pow(10,p_value);
            if(mul*dig >= 1000 ){
                for(int i=0 ; i<dig ; i++){
                    result+='M';
                }
            }
            else if(mul*dig >= 500){
                if(mul*dig == 900){
                    result+="CM";
                }
                else{
                    result+='D';
                    for(int i=0 ; i<(mul*dig - 500)/100 ; i++){
                        result+='C';
                    }
                }
            }
            else if(mul*dig >= 100){
                if(mul*dig == 400){
                    result+="CD";
                }else{
                for(int i=0 ; i<dig ; i++){
                    result+='C';
                }
                }
            }
            else if(mul*dig >= 50){
                if(mul*dig == 90){
                    result+="XC";
                }
                else{
                    result+='L';
                    for(int i=0 ; i<(mul*dig - 50)/10 ; i++){
                        result+='X';
                    }
                }
            }
            else if(mul*dig >= 10){
                if(mul*dig == 40){
                    result+="XL";
                }
                else{
                for(int i=0 ; i<dig ; i++){
                    result+='X';
                }
                }
            }
            else if(mul*dig >= 5){
                if(mul*dig == 9){
                    result+="IX";
                }
                else{
                    result+='V';
                    for(int i=0 ; i<(mul*dig - 5) ; i++){
                        result+='I';
                    }
                }
            }
            else if(mul*dig >= 1){
                if(mul*dig == 4){
                    result+="IV";
                }
                else{
                for(int i=0 ; i<dig ; i++){
                    result+='I';
                }
                }
            }
            rev/=10;
        }
        return result;
    }
};