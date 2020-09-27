#include <algorithm>
#include <sstream>
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
// using std::string;
// using std::vector;
bool comparator(string a, string b)
{
	string ab;
	string ba;
	ab = a + b;
	ba = b + a;
	if(ab > ba)
	{
		return true;
	}
	return false;
}
// string largest_number(vector<string> a)
// {
// 	//write your code here
// 	std::stringstream ret;
// 	for (size_t i = 0; i < a.size(); i++)
// 	{
// 		ret << a[i];
// 	}
// 	string result;
// 	ret >> result;
// 	return result;
// }

int main()
{
	int n;
	std::cin >> n;
	vector<string> a(n);
	for (size_t i = 0; i < a.size(); i++)
	{
		std::cin >> a[i];
	}
	sort(a.begin(), a.end(), comparator);
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i];
	}
	cout << endl;
	return 0;
	
}
