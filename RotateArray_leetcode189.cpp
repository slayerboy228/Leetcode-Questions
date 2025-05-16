class Solution {
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k %= n;  // Handle k >= n

        reverse(nums.begin(), nums.end());              // Step 1
        reverse(nums.begin(), nums.begin() + k);        // Step 2
        reverse(nums.begin() + k, nums.end());          // Step 3
    }
};
