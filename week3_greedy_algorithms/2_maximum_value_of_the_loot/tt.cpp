#include <iostream>
#include <cmath>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef vector<vector<int>> int_vec_2d;
typedef vector<int>:: iterator vi_it;
typedef map<int, int>::iterator mii_it;
struct SomePair
{
    int a;
    int b;
    double c;
};

bool comparator(SomePair a, SomePair b)
{
    if(a.c > b.c)
    {
        return true;
    }   

    return false;
}

int main()
{
    // int n;
    // cin >> n;
    // vector<SomePair> pairs;
    // pairs.reserve(n);
    // int a, b;
    // for (int i = 0; i < n; i++)
    // {
    //     SomePair sp;
    //     cin >> a >> b;
    //     sp.a = a;
    //     sp.b = b;
    //     sp.c = (double)(a/b);
    //     pairs.push_back(sp);
    // }
    
    // sort(pairs.begin(), pairs.end(), comparator);
    cout << 10 - 0.001 << endl;

    return false;
}