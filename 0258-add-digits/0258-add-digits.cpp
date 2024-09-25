class Solution {
public:
    int addDigits(int num) {
    int res;
    do{ 
        int tens=int(num/10) ;
        int ones=num%10;
        int sum = tens+ones;
        res=sum;
        if(res>=10){
            return addDigits(res);
        }
    }
    while(num>=10 && num<=99); 
    return res;
    }
};


