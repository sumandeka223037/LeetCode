class Solution {
public:
    bool isPalindrome(int x) {
        long int reverseNum=0;
        long int temp=x;
        while(temp>0){
            reverseNum=(reverseNum*10)+(temp%10);
            temp=temp/10;
        }
        return (reverseNum==x);
       }
    };