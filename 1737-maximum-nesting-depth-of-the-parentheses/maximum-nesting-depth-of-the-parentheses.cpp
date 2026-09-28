class Solution {
public:
    int maxDepth(string s) {
        int maxm=0,ans=0;
        for (char c:s){
            if(c=='('){
                ans++;
            }
            if(c==')'){
                ans--;
            }
            maxm=max(maxm,ans);
        }
        return maxm;
        
    }
};