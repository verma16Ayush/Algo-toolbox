#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;



ll get_small_fib(ll n, ll m)
{
    ll a[n+2];
    a[0] = 0 % m;
    a[1] = 1 % m;
    for (int i = 2; i <= n; i++)
    {
        /* code */
        a[i] = (a[i-1] + a[i-2]) % m;

    }
    return a[n];
}


int main() {
    ll n, m;
    std::cin >> n >> m;
    // ll t = get_res(n, m);
    // std::cout << get_res(n, m) << '\n';
    ll small_n = n % get_patlen(n, m);

    std::cout << get_small_fib(small_n, m) << endl;
    return 0;
}
