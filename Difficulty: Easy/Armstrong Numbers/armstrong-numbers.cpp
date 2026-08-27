class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int sum = 0;
        int dup = n;
        while(n>0){
            int ld = n % 10;
            sum = sum + (ld*ld*ld);
            n = n/10;
        }
        if(sum == dup) return true;
        else return false;
    }
};