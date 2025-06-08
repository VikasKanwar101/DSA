class Solution {
public:
    bool isHappy(int n) {
        int l;
        while(n!=1 && n!=4){
            int sum=0;
            while(n>0){
                l=n%10;
                sum=sum+(l*l);
                n=n/10;
            }
            n=sum;
        }
        return n==1;
    }
};