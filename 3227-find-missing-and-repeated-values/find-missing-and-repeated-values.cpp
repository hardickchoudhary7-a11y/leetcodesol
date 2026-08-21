class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = n*n;
        vector<int>freq(m+1,0);
        vector<int>ans;
        int miss=0;
        int repe=0;
        for(int i =0;i<n;i++){
            for(int j=0;j<n;j++){
                freq[grid[i][j]]++;
            }
        }
        for(int i =1;i<=m;i++){
            if(freq[i]==0){
                miss =i;

            }
            if(freq[i]==2){
                repe = i;
            }  
        }
        ans.push_back(repe);
        ans.push_back(miss);
        return ans;
        
    }
};