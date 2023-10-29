class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        // Sort the input array in ascending order.
        sort(nums.begin(), nums.end());
        
        // Initialize the answer vector to store unique 
        vector<vector<int>> answer;
        
        // Create a map to track and eliminate duplicate
        map<vector<int>, int> M;
        
        // Initialize pointers 
        int start = 0;
        int end = 0;

        // nested loops to select pairs of elements (i, j) in the sorted array.
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                start = j + 1;
                end = n - 1;
                
                //  Apply the two-pointer technique to find pairs (start, end) that sum to the target.
                while (start < end) {
                    long long x = nums[start] + nums[end] + nums[i] * 1ll + nums[j] * 1ll;
                    
                    
                    if (target == x) {
                        // Create a vector to store the quadruplet.
                        vector<int> ans;
                        ans.push_back(nums[i]);
                        ans.push_back(nums[j]);
                        ans.push_back(nums[start]);
                        ans.push_back(nums[end]);
                        
                        // Check if this quadruplet is unique using the map.
                        if (M[ans] == 0) {
                            M[ans] = 1;
                            answer.push_back(ans);
                        }
                        // Move the 'start' pointer to the right 
                        start++;
                    }
                    // If the sum is less than the target, move the 'start' pointer to the right.
                    else if (x < target) {
                        start++;
                    }
                    // If the sum is greater than the target, move the 'end' pointer to the left.
                    else {
                        end--;
                    }
                }
            }
        }
        
      
        return answer;
    }
};
