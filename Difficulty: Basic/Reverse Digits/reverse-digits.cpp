class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int revnum  = 0;
        while(n > 0){
            int ld = n % 10;
            revnum = (revnum * 10) + ld;
            n = n/10;
        }
        return revnum;
    }
};