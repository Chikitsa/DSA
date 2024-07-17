
// Brute Force Solution

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int n = nums.size();
        int lastNonZeroFoundAt = 0;

        
        for (int i = 0; i < n; ++i) {
            if (nums[i] != 0) {
                nums[lastNonZeroFoundAt] = nums[i];
                lastNonZeroFoundAt++;
            }
        }

        
        for (int i = lastNonZeroFoundAt; i < n; ++i) {
            nums[i] = 0;
        }
    }
};
