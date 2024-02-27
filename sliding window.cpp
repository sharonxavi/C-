#include <iostream>
using namespace std;
void findslidwin(const int nums[], int n, int k) {
    int maxind = 0;

    for (int i = 0; i <= n - k; i++) {
        if (maxind < i) {
            maxind = i;
            for (int j = i + 1; j < i + k; j++) {
                if (nums[j] > nums[maxind]) {
                    maxind = j;
                }
            }
        }
        cout << nums[maxind] << " ";
        if (i + k < n && nums[i + k] >= nums[maxind]) {
            maxind = i + k;
        }
    }
    cout << endl;
}

int main() {
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;
    int nums[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter the window size: ";
    cin >> k;

    cout << "Sliding Window Maximum: ";
    findslidwin(nums, n, k);

    return 0;
}
