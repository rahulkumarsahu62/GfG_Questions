class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        int n = arr.size();
        if( n == 0) return 0;
        unordered_set<int> st;
        for(int i = 0; i<n; i++){
            st.insert(arr[i]);
        }
        int ans = 0;
        for(int x : st){
            if(st.find(x-1) == st.end()){
                int curr = x;
                int length = 1;
                
                while(st.find(curr+1) != st.end()){
                    curr++;
                    length++;
                }
                ans = max(ans,length);
            }
        }
        return ans;
    }
};