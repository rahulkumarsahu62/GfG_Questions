class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        unordered_map<int,int> mp;
        int left = 0;
        int right = 0;
        int maxlength = 0;
        
        for(int right = 0; right<arr.size();right++){
            mp[arr[right]]++;
            
            while ( mp.size() > 2){
                mp[arr[left]]--;
                if(mp[arr[left]] == 0){
                    mp.erase(arr[left]);
                }
                left++;
            }
            maxlength = max(maxlength,right-left+1);
        }
        return maxlength;
    }
};