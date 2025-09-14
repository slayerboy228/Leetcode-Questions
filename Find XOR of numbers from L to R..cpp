// User function Template for C++

class Solution {
    int func(int n) {
        if (n % 4 == 1)
            return 1;
        if (n % 4 == 2)
            return n + 1;
        if (n % 4 == 3)
            return 0;
        if (n % 4 == 0)
            return n;
    }
  public:
    int findXOR(int l, int r) {
        // complete the function here
        return func(l - 1) ^ func(r);
    }
};
