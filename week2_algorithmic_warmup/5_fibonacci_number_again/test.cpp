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

int main()
{
    vector<int> a;
    cout << a.size() << endl;
    cout << a.capacity() << endl;
    a.push_back(10);
    cout << a.size() << endl;
    cout << a.capacity() << endl;
    a.push_back(20);
    cout << a.size() << endl;
    cout << a.capacity() << endl;
    return 0;

}