#include <iostream>
#include <cstring>
using namespace std;
void swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

void reverse(char* nums, int start, int end) {
    while (start < end) {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

bool nextperm(char* nums, int size) {
    int k = -1;
    int l = -1;
    
    for (int i = 0; i < size - 1; i++) {
        if (nums[i] < nums[i + 1]) {
            k = i;
        }
    }

    if (k == -1) {
        reverse(nums, 0, size - 1);
        return false;
    }

    for (int i = k + 1; i < size; i++) {
        if (nums[k] < nums[i]) {
            l = i;
        }
    }

    swap(nums[k], nums[l]);
    reverse(nums, k + 1, size - 1);
    return true;
}

char* getperm(int n, int k) {
    char* result = new char[n + 1];
    char* nums = new char[n];
    for (int i = 0; i < n; i++) {
        nums[i] = i + '1';
    }
    nums[n] = '\0';

    for (int i = 1; i < k; i++) {
        nextperm(nums, n);
    }

    strcpy(result, nums);
    delete[] nums;
    return result;
}

int main() {
    int n, k;
	cout<<"Enter maximum number:";
	cin>>n;
	cout<<"Enter nth number for permutaion:";
	cin>>k;
    char* sequence = getperm(n, k);
    cout << "The " << k << "-th permutation sequence of numbers 1 to " << n << " is: " << sequence << endl;
    delete[] sequence;

    return 0;
}
