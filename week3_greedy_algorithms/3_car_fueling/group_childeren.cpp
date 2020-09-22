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

int group_chil(vector<double>& ages)
{
    int count = 0;
    int i = 0;
    if(ages.size() == 1)
        return 1;

    while(i != ages.size())
    {
        double agestart = ages[i];
        while(ages[i] - agestart - 1 <= 0.0001 && i != ages.size())
        {
            i++;
        }
        // if(i == ages.size())
        //     break;
        count++;
    }
    return count;
}

int main()
{
    double temp;
    vector<double> ages;
    int n;
    cin >> n;
    ages.reserve(n);
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        ages.push_back(temp);
    }
    sort(ages.begin(), ages.end());
    int t = group_chil(ages);
    return 0;
    
}
