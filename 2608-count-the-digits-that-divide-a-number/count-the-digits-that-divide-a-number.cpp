class Solution {
public:
    int countDigits(int num) {
        int c=0;
        int n=num;
        int n1=num;
        while(n>0)
        {
            n=num%10;
            if(n!=0 && n1%n==0) c++;
            num=num/10;
        }
        return c;
    }
};