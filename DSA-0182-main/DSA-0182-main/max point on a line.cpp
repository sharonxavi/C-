#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

struct Point {
    int x;
    int y;
    Point() : x(0), y(0) {}
    Point(int a, int b) : x(a), y(b) {}
};

int maxPoints(vector<Point>& points) {
    if (points.size() < 3)
        return points.size();

    int maxPoints = 0;

    for (int i = 0; i < points.size(); ++i) {
        unordered_map<double, int> slopeCount; // slope -> count of points with the same slope
        int samePointCount = 0; // count of points with the same coordinates as points[i]
        int verticalCount = 0; // count of points with the same x-coordinate as points[i]

        for (int j = 0; j < points.size(); ++j) {
            if (i != j) {
                if (points[i].x == points[j].x && points[i].y == points[j].y)
                    samePointCount++;
                else if (points[i].x == points[j].x)
                    verticalCount++;
                else {
                    double slope = (double)(points[j].y - points[i].y) / (points[j].x - points[i].x);
                    slopeCount[slope]++;
                }
            }
        }

        int currentMax = verticalCount;
        for (auto& pair : slopeCount)
            currentMax = max(currentMax, pair.second);

        currentMax += samePointCount + 1; // add 1 for the point itself
        maxPoints = max(maxPoints, currentMax);
    }

    return maxPoints;
}

int main() {
    vector<Point> points = {Point(1,1), Point(2,2), Point(3,3), Point(4,1), Point(5,1)};
    cout << "Max Points on a Line: " << maxPoints(points) << endl;
    return 0;
}

