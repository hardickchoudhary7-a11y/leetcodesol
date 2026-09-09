class Solution {
public:
    long long countCommas(long long n) {
        if(n <= 999){
            return 0;

        } 

        long Commas = 0;
        long long p = 1000;

        while(p<= n){
            Commas += n - p + 1;
            p *= 1000;
        }

        return Commas;
    }
};