class Solution {
public:
    bool canWinNim(int n) {
        if(n==1 || n==2 || n==3 || n%4!=0){
            return 1;
        }
        else{
            return 0;
        }
    }
};