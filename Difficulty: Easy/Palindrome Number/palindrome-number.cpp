class Solution {
  public:
    bool isPalindrome(int n) {
        int revnum = 0;
        if ( n < 0) n = -n;
        int duplicate = (n);
        while(n > 0){
            int ld = (n % 10);
            revnum = (revnum * 10) + ld;
            n = n /10;
        }
        if(revnum == duplicate) return true;
        else return false;
    }
};