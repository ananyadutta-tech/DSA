class Solution {
public:
    void solve(int ind, vector<int>& nums, vector<vector<int>>& ans) {
        int n = nums.size();
        // base
        if (ind == n) {
            ans.push_back(nums);
            return;
        }

        // otherwise
        for (int i = ind; i < n; i++) {
            swap(nums[ind], nums[i]);  // choose
            solve(ind + 1, nums, ans); // explore
            swap(nums[ind], nums[i]);  // restore the combo by bT
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(0, nums, ans);
        return ans;
    }
};