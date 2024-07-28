#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> numberGame(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end()); 
        std::vector<int> arr;

        while (!nums.empty()) {
            // Alice removes the smallest element
            int aliceRemoved = nums.front();
            nums.erase(nums.begin());
            
            if (!nums.empty()) {
                // Bob removes the next smallest element
                int bobRemoved = nums.front();
                nums.erase(nums.begin());
                
                // Bob appends his removed element first
                arr.push_back(bobRemoved);
            }
            
            // Alice appends her removed element
            arr.push_back(aliceRemoved);
        }

        return arr;
    }
};
