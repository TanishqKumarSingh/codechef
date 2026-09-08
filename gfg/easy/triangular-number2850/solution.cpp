class Solution {
public:
    int isTriangular(int n) {
        return helper(n, 1);
    }

    int helper(int n, int i) {
        if (n == 0)
            return 1;

        if (n < 0)
            return 0;

        return helper(n - i, i + 1);
    }
};