class Solution {
public:
    int climbStairs(int n) {
        if (n < 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        int fn_1 = 0, fn_2 = 0 , fn = 1;
        for(int i = 1; i <= n; i++) {
            fn_2 = fn_1;
            fn_1 = fn;            
            fn = fn_1 + fn_2;
        }
        return fn;
    }
};
