#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maximumGap(vector<int>& nums) {
    int n = nums.size();
    if (n < 2) return 0;

    int maxVal = *max_element(nums.begin(), nums.end());
    int minVal = *min_element(nums.begin(), nums.end());
    int bucketSize = max(1, (maxVal - minVal) / (n - 1)); // determine the size of each bucket
    int bucketCount = (maxVal - minVal) / bucketSize + 1; // determine the number of buckets

    vector<int> maxBucket(bucketCount, INT_MIN); // store the maximum value in each bucket
    vector<int> minBucket(bucketCount, INT_MAX); // store the minimum value in each bucket

    for (int num : nums) {
        int index = (num - minVal) / bucketSize;
        maxBucket[index] = max(maxBucket[index], num);
        minBucket[index] = min(minBucket[index], num);
    }

    int prevMax = minVal, maxGap = 0;
    for (int i = 0; i < bucketCount; ++i) {
        if (maxBucket[i] == INT_MIN && minBucket[i] == INT_MAX) // skip empty bucket
            continue;
        maxGap = max(maxGap, minBucket[i] - prevMax);
        prevMax = maxBucket[i];
    }

    return maxGap;
}

int main() {
    vector<int> nums = {3, 6, 9, 1};
    cout << "Maximum Gap: " << maximumGap(nums) << endl;
    return 0;
}

