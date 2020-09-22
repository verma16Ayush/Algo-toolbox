#include <iostream>
#include <vector>
#include <algorithm>

int MaxPairwiseProduct(const std::vector<int>& numbers) {
    int max_product = 0;
    int n = numbers.size();

    for (int first = 0; first < n; ++first) {
        for (int second = first + 1; second < n; ++second) {
            max_product = std::max(max_product,
                numbers[first] * numbers[second]);
        }
    }

    return max_product;
}

long long int MaxProd(std::vector<long long int> a)
{
    sort(a.begin(), a.end());
    return (long long) (a[a.size() - 1] * a[a.size() - 2]);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<long long int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxProd(numbers) << "\n";
    return 0;
}
