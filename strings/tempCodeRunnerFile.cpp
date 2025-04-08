    char toLower(char alpha){
        if(alpha >='a' && alpha<='z'){
            return alpha;
        }
        else{
            char temp = alpha - 'A';
            temp = alpha + 'a';
            return temp;
        }
        return t;
    }