    while(num >=0){
        int last = num%10;
        ans = 10 * ans + last;
        num = num/10;
    }