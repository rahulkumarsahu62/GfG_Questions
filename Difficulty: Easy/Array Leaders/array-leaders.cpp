class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> ans;
        int rG = arr[n-1];
        
        if(n == 0){
            return ans;
        }
        ans.push_back(arr[n-1]);
        for(int i = n-2; i>=0;i--){
            if(arr[i] >= rG){
                ans.push_back(arr[i]);
                rG = arr[i];
               
            }
            
        }
         reverse(ans.begin(),ans.end());
        
        return ans;
    }
};