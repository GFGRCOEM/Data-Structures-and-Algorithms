
class Solution {
public:

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());// sorting the array using the sort() function 
    int n = nums.size();

    for (int i = 0; i < n - 2; i++) {
        // Skip duplicates from array 
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int j = i + 1;
        int k = n - 1;

        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];

            if (sum < 0) {
                j++;
            } else if (sum > 0) {
                k--;
            } else {
                result.push_back({nums[i], nums[j], nums[k]});

                // Skip duplicates
                while (j < k && nums[j] == nums[j + 1]) j++;
                while (j < k && nums[k] == nums[k - 1]) k--;

                j++;
                k--;
            }
        }
    }
    return result;
}
};