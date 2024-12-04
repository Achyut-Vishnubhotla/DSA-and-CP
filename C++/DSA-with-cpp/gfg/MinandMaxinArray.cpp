class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long> arr) {
        // Initialize smallest and largest as the maximum and minimum possible long long values
        long long smallest = LLONG_MAX;  // +infinity for long long
        long long largest = LLONG_MIN;  // -infinity for long long

        // Iterate through the array to find smallest and largest
        for (long long num : arr) {
            smallest = min(num, smallest);
            largest = max(num, largest);
        }

        // Return the pair of smallest and largest
        return {smallest, largest};
    }
};