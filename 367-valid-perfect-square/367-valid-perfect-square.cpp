class Solution {
public:
    bool isPerfectSquare(int n)
    {
    for (long int i = 1; i * i <= n; i++) {
 
        // If (i * i = n)
        if ((n % i == 0) && (n / i == i)) {
            return true;
        }
    }
    return false;
    }
};