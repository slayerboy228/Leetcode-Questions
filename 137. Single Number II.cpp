// Map approach
// TC = O(n) = O(nlog(n)) sometimes
// SC = O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }

        for (auto it : mpp) {
            if (it.second == 1)
                return it.first;
        }
        return -1;
    }
};
