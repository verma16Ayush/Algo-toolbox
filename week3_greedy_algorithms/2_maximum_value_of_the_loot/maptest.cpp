#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef vector<vector<int>> int_vec_2d;
typedef vector<int>:: iterator vi_it;
typedef map<int, int>::iterator mii_it;

bool compare(pii a, pii b)
{
    if(a.second > b.second)
        return true;
    else
    {
        return false;
    }
}

int main()
{
    unordered_map<int, int> wv;
    int value, weight;
    for (int i = 0; i < 5; i++)
    {
        cin >> value >> weight;
        wv[weight] = value;
    }

    sort(wv.begin(), wv.end(), compare);
    return 0;
}