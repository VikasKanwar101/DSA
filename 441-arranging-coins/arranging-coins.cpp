class Solution {
public:
    int arrangeCoins(int n) {
        long long s=0;
        int i=1;
        while(s<=n)
        {
            s=s+i;
            i++;
        }
        return i-2;
    }
};