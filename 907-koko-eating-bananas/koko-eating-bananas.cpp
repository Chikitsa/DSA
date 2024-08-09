class Solution {
public:    
    int findMax(std::vector<int>& piles) {
        int n = piles.size();
        int maxi = INT_MIN;
        for(int i = 0; i < n; i++) {
            maxi = std::max(maxi, piles[i]);
        }
        return maxi;
    }

    long long calculateTotalHours(std::vector<int>& piles, int hourly) {
        long long totalH = 0;
        int n = piles.size();
        for(int i = 0; i < n; i++) {
            totalH += std::ceil((double)piles[i] / (double)hourly);
        }
        return totalH;
    }

    int minEatingSpeed(std::vector<int>& piles, int h) {
        int low = 1, high = findMax(piles);
        while(low <= high) {
            int mid = low + (high - low) / 2;
            long long totalH = calculateTotalHours(piles, mid);
            if(totalH <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};