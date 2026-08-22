class Solution {
public:
    bool canWinNim(int n) {
        return n%4==1 || n%4==2 || n%4==3;
        
    }
};