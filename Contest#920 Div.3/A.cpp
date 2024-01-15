#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        // Read coordinates for the four corners
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        // Find the minimum and maximum x and y coordinates
        int min_x = min({x1, x2, x3, x4});
        int max_x = max({x1, x2, x3, x4});
        int min_y = min({y1, y2, y3, y4});
        int max_y = max({y1, y2, y3, y4});

        // Calculate the side length and area of the square
        int side_length = max(max_x - min_x, max_y - min_y);
        int area = side_length * side_length;

        // Print the area for each test case
        cout << area << endl;
    }

    return 0;
}
