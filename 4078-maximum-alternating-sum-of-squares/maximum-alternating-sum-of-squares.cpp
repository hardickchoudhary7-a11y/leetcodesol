class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long> squared;
        for (int x : nums) {
            long long val = (long long)x * x;
            squared.push_back(val);
        }
        
    
        sort(squared.begin(), squared.end());
        
        long long score = 0;
        int mid = n / 2;
        
        
        for (int i = 0; i < n; ++i) {
            if (i < mid) {
                score -= squared[i];
            } else {
                score += squared[i];
            }
        }
        
        return score;
    }
};