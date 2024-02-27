#include <iostream>
#include <vector>
using namespace std;
int firstMissingPositive(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        if (nums[i] <= 0 || nums[i] > n)
            nums[i] = 0;
    }
    for (int i = 0; i < n; ++i) {
        int num = abs(nums[i]);
        if (num != 0 && nums[num - 1] > 0)
            nums[num - 1] = -nums[num - 1];
    }
    for (int i = 0; i < n; ++i) {
        if (nums[i] >= 0)
            return i + 1;
    }
    return n + 1;
}
int main() {
    vector<int> nums = {3, 4, -1, 1};
    cout << "First Missing Positive: " << firstMissingPositive(nums) << endl;
    return 0;
}
