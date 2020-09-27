#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

// using std::vector;

int binary_search(const vector<int> &a, int x)
{
	int start = 0;
	int end = a.size() - 1;
	int mid;
	while(start <= end)
	{
		mid = start + (end - start) / 2;
		if(a[mid] == x)
			return mid;
		else if(x < a[mid])
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
  
	return -1;
}

int linear_search(const vector<int> &a, int x)
{
	for (size_t i = 0; i < a.size(); ++i)
	{
		if (a[i] == x)
			return i;
	}
	return -1;
}

int main()
{
	int n;
	std::cin >> n;
	vector<int> a(n);
	for (size_t i = 0; i < a.size(); i++)
	{
		std::cin >> a[i];
	}

	int m;
	std::cin >> m;
	vector<int> b(m);

	for (int i = 0; i < m; ++i)
	{
		std::cin >> b[i];
	}
	for (int i = 0; i < m; ++i)
	{
		// replace with the call to binary_search when implemented
		std::cout << binary_search(a, b[i]) << ' ';
	}
	
	return 0;
}
