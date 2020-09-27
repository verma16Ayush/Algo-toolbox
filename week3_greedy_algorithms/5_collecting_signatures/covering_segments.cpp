// #include <algorithm>
// #include <iostream>
// #include <climits>
// #include <vector>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// using std::vector;

struct Segment
{
    int start, end;
};

bool comaparator(const Segment &a, const Segment &b)
{
    if (a.end < b.end)
    {
        return true;
    }

    return false;
}

vector<int> optimal_points(vector<Segment> &segments)
{
    vector<int> points;
    sort(segments.begin(), segments.end(), comaparator);
    points.push_back(segments[0].end);
    int j = 0;
    for (int i = 0; i < segments.size(); ++i)
    {
        if(points[j] >= segments[i].start && segments[i].end)
        {
            continue;
        }
        else
        {
            points.push_back(segments[i].end);
            j++;
        }
    }

    return points;
}

int main()
{
    int n;
    std::cin >> n;

    vector<Segment> segments(n);
    for (size_t i = 0; i < segments.size(); ++i)
    {
        std::cin >> segments[i].start >> segments[i].end;
    }

    vector<int> points = optimal_points(segments);
    std::cout << points.size() << "\n";

    for (size_t i = 0; i < points.size(); ++i)
    {
        std::cout << points[i] << " ";
    }
    return 0;
}
