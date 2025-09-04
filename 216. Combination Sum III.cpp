class Solution {
    vector<vector<int>> result;
    
    void solve(int i, int k, int n, vector<int> & t) {
        if (k == 0) {
            if (n == 0) {
                result.push_back(t);
                return;
            }
            return;
        }

        if (n == 0)
            return;

        for (int ix = i; ix <= 9; ix++) {
            t.push_back(ix);
            solve(ix + 1, k - 1, n - ix, t);
            t.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> t;
        solve(1, k, n, t);
        return result;
    }
};
