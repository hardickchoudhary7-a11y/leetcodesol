class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int mn =INT_MAX;
        int count=0;
        for(int i =0;i<n;i++){
            mn= min(mn,nums1[i]);
            if(nums1[i]%2==1){
                count++;
            }
        }
        return mn%2 || count==0;

        
    }
};