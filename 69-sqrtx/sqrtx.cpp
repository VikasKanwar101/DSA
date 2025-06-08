class Solution {
public:
    int mySqrt(int x) {
        for(long long i=1;i<=x;i++){
            if(i*i==x)
            return i;
            if(i*i<x)
            {
                if((i+1)*(i+1)>x)
                return i;
            }
        }
        return 0;
    }
};