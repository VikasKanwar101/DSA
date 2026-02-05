class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int n=numbers.length;
        int i=0;
        int j=n-1;
        while(i<j){
            if(target-numbers[i]==numbers[j])
            return new int[]{i+1,j+1};
            else if(target<numbers[j]+numbers[i])
            j--;
            else
            i++;
        }
        return new int[]{-1,-1};
    }
}