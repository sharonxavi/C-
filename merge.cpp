#include <iostream>
using namespace std;
double mediansorted(int nums1[],int m,int nums2[],int n) {
    int total = m + n, i = 0, j = 0, prev = 0, curr = 0, k;
    for ( k = 0; k <= total / 2; k++) {
        prev = curr;
        if (i < m && (j >= n || nums1[i] < nums2[j])) {
            curr = nums1[i++];
        } else {
            curr = nums2[j++];
        }
    }
    if (total % 2 == 0) {
        return (prev + curr) / 2.0;
    } else {
        return curr;
    }
}
int main() {
    int m, n, nums1[m], nums2[n], i;
    cout << "Enter the size of the first array: ";
    cin >> m;
    cout << "Enter the elements of the first array: ";
    for (i = 0; i < m; i++) {
        cin >> nums1[i];
    }
    cout << "Enter the size of the second array: ";
    cin >> n;
    cout << "Enter the elements of the second array: ";
    for (i = 0; i < n; i++) {
        cin >> nums2[i];
    }
    double median = mediansorted(nums1, m, nums2, n);
    cout << "The median of the two sorted arrays is: " << median << endl;
    return 0;
}
