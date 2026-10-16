class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = nums.size();
        int m = *max_element(nums.begin(), nums.end());
        if (m == 0)
            return 0;
        vector<int> dp(m + 1,0);
        vector<int> freq(m + 1, 0);
        for (int x : nums) {
            freq[x]++;
        }
        dp[1] = freq[1];
        for (int i = 2; i <= m; i++) {
            dp[i] = max(dp[i - 1], dp[i - 2] + i * freq[i]);
        }
        return dp[m];
    }
};