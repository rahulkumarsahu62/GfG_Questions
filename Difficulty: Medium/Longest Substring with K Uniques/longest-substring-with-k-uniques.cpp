class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        unordered_map<char,int> mpp;
        int maxlen = -1, l =0, r = 0;
        while(r<s.size())
        {
            mpp[s[r]]++;
            
            if(mpp.size() > k)
            {
                mpp[s[l]]--;
                if(mpp[s[l]] == 0) {
                    mpp.erase(s[l]);
                }
                 l++;
            }
            if(mpp.size() == k){
            maxlen = max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};