#include <iostream>
using namespace std;
struct Wall {
    int length;
    int color;
};
const int MAX_WALLS = 100;
Wall walls[MAX_WALLS];
int main() {
    int n, k;
    cout << "Enter the number of walls: ";
    cin >> n;
    cout << "Enter the number of colors: ";
    cin >> k;
    if (n > MAX_WALLS) {
        cerr << "Error: The number of walls is greater than the maximum size of the array." << endl;
        return 1;
    }
    for (int i = 0; i < n; ++i) {
        cout << "Enter the length of wall " << i + 1 << ": ";
        cin >> walls[i].length;
    }
    int total_length = 0;
    for (int i = 0; i < n; ++i) {
        total_length += walls[i].length;
    }
    int remaining_length = total_length;
    for (int i = 0; i < n; ++i) {
        walls[i].color = remaining_length / k;
        remaining_length -= walls[i].color * k;
        k--;
    }
    cout << "The colors for the walls are:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Wall " << walls[i].length << " : Color " << walls[i].color << endl;
    }
    return 0;
}
