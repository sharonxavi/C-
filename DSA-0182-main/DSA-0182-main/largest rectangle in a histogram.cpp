#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    stack<int> s;
    int maxArea = 0;
    
    for (int i = 0; i <= n; ++i) {
        int h = (i == n ? 0 : heights[i]);
        if (s.empty() || h >= heights[s.top()]) {
            s.push(i);
        } else {
            int tp = s.top();
            s.pop();
            maxArea = max(maxArea, heights[tp] * (s.empty() ? i : i - 1 - s.top()));
            --i;
        }
    }
    
    return maxArea;
}

int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    int maxArea = largestRectangleArea(heights);
    cout << "Largest Rectangle Area: " << maxArea << endl;
    
    return 0;
}

