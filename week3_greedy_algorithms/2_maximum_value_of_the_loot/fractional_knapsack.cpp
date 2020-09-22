#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
struct weightVal
{
    int weight;
    int value;
    double vw;
};

bool comparator(weightVal a, weightVal b)
{
    if(a.vw > b.vw)
    {
        return true;
    }

    return false;
}

double get_val(vector<weightVal>& wv_trip, int capacity)
{
    int i = 0;
    double value = 0;
    double cap = capacity;
    while(cap >= 0.0001 && i < wv_trip.size())
    {
        if(cap <= wv_trip[i].weight)
        {
            value += wv_trip[i].vw * cap;
            wv_trip[i].weight -= cap;
            cap = 0;
        }
        else
        {
            value += wv_trip[i].value;
            cap -= wv_trip[i].weight;
        }
        i++;
    }
    return value;
}

int main() 
{
    int n;
    int capacity;
    std::cin >> n >> capacity;
    int value, weight;
    vector<weightVal> wv_trip;
    wv_trip.reserve(n);
    for (int i = 0; i < n; i++) 
    {
        std::cin >> value >> weight;
        weightVal temp;
        temp.weight = weight;
        temp.value = value;
        temp.vw = (double)value / weight;
        wv_trip.push_back(temp);
    }
    sort(wv_trip.begin(), wv_trip.end(), comparator);

    std::cout.precision(10);
    std::cout << get_val(wv_trip, capacity) << std::endl;
    return 0;
}
