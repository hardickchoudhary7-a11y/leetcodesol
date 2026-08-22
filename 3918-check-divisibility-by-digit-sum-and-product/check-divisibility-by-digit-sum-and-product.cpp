class Solution {
public:
    bool checkDivisibility(int n) {
        int sum =0;
        int product =1;
        int orig=n;
        while(n>0){
            sum += n%10;
            product *= n%10;
            n = n/10;
           
        }
        int a= sum+product;
        return orig%a==0;
        
    }
};