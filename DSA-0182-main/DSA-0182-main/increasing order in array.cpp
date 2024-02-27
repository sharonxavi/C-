#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {0, 98, 761, 100, -982, -72};
    size_t len = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + len);
    cout<<"The sorted array is: ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
