class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
    vector<int> result(n, -1);
    
    // Create a map to store the start point along with its index
    map<int, int> startMap;
    for (int i = 0; i < n; i++) {
        startMap[intervals[i][0]] = i;
    }
    
    // For each interval, find the smallest start that is greater than or equal to end
    for (int i = 0; i < n; i++) {
        auto it = startMap.lower_bound(intervals[i][1]);
        if (it != startMap.end()) {
            result[i] = it->second;
        }
    }
    
    return result;
    }
};