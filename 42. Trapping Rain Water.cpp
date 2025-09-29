class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> suf(n, 0);
        suf[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suf[i] = max(suf[i + 1], height[i]);
        }
        int total = 0;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, height[i]);
            int leftMax = maxi;
            int rightMax = suf[i];
            if (height[i] < leftMax && height[i] < rightMax)
                total += min(leftMax, rightMax) - height[i];
        }
        return total;
    }
};

/*
Time complexity = O(2n)
Space complexity = O(n) : only for suffix array
*/
