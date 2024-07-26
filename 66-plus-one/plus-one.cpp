class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         int n = digits.size();
    // Start from the last digit and add one
    for (int i = n - 1; i >= 0; --i) {
        digits[i] += 1;
        if (digits[i] < 10) {
            // No carry, we can return the result
            return digits;
        } else {
            // Set the current digit to 0 and carry the 1
            digits[i] = 0;
        }
    }
    

    digits.insert(digits.begin(), 1);
    return digits;
}
    
};