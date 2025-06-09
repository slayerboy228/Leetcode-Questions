class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int low = 0;
        int high = (m * n - 1);
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int row = mid / n;
            int col = mid % n;
            if (target == matrix[row][col])
                return true;
            if (target < matrix[row][col])
                high = mid - 1;
            else
                low = mid + 1;
        }
        return false;
    }
};
