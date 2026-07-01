class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        //base
        if (n < 4) return false;

        int i = 0;

        // First strictly increasing part
        while (i + 1 < n && nums[i] < nums[i + 1]) {
            i++;
        }
        int p = i;

        // p cannot be 0 or n-1
        if (p == 0 || p >= n - 2) return false;

        // Strictly decreasing part
        while (i + 1 < n && nums[i] > nums[i + 1]) {
            i++;
        }
        int q = i;

        // q must be after p and before last element
        if (q == p || q >= n - 1) return false;

        // Final strictly increasing part
        while (i + 1 < n && nums[i] < nums[i + 1]) {
            i++;
        }

        // Must consume the entire array
        return i == n - 1;
    }
};