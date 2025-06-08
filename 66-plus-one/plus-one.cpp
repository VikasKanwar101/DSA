class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int l=digits.size()-1;
        digits[l]++;
        if(digits[l]==10)
        {
            while(digits[l]==10){
                digits[l]=0;
                l--;
                if(l<0){
                    digits.insert(digits.begin(),1);
                    return digits;
                }
                digits[l]++;
            }
        }
        return digits;
    }
};