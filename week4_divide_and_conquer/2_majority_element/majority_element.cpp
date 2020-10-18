#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

int get_majority_element(vector<int> &a, int left, int right)
{
	// if (left == right)
	// 	return -1;
	// if (left + 1 == right)
	// 	return a[left];
	//write your code here
	int mid = (left + right) / 2;
	int majority = a[mid];
	int count = 0;

	for (int i = 0; i < a.size(); i++)
	{
		if(majority == a[i])
			count++;
	}

	if(count > a.size() / 2)
		return 1;
		
	return -1;
}

int main()
{
	int n;
	std::cin >> n;
	vector<int> a(n);
	for (size_t i = 0; i < a.size(); ++i)
	{
		std::cin >> a[i];
	}

	std::sort(a.begin(), a.end());
	std::cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
	return 0;
}
