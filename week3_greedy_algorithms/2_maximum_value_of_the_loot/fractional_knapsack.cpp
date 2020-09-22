#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

double get_optimal_value(int cap, map<int, int> wv_map)
{
    // map<int, int>::iterator it = wv_map.crbegin();
    
}



int main() 
{
    int n;
    int capacity;
    std::cin >> n >> capacity;
    // vector<int> values(n);
    // vector<int> weights(n);
    int value, weight;
    map<int, int> wv_map;
    for (int i = 0; i < n; i++) 
    {
        std::cin >> value >> weight;
        wv_map[weight] = value;
    }

    double optimal_value = get_optimal_value(capacity, wv_map);

    std::cout.precision(10);
    std::cout << optimal_value << std::endl;
    return 0;
}
