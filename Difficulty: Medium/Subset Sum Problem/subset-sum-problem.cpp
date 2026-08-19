class Solution {
public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        int n = arr.size();

        vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

        // Sum 0 is always possible using an empty subset
        for (int i = 0; i <= n; i++) {
            dp[i][0] = true;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= sum; j++) {

                // Don't take arr[i-1]
                dp[i][j] = dp[i - 1][j];

                // Take arr[i-1]
                if (arr[i - 1] <= j) {
                    dp[i][j] = dp[i][j] ||
                               dp[i - 1][j - arr[i - 1]];
                }
            }
        }

        return dp[n][sum];
    }
};