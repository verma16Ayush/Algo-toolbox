#include <iostream>

long long int gcd_naive(long long int a, long long int b) {
  long long int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}

long long int gcd_eff(long long int a, long long int b)
{
  if(b == 0)
    return a;
  int x = a % b;
  return gcd_eff(b, x);
}
int main() {
  long long int a, b;
  std::cin >> a >> b;
  long long int more = a > b ? a : b;
  long long int less = a < b ? a : b;
  // std::cout << gcd_eff(more, less) << std::endl;
  int gcd = gcd_eff(more, less);
  int lcm = (more * less) / gcd ;
  std::cout << lcm << std::endl;
  // std::cout << gcd_naive(more, less) << std::endl;
  return 0;
}
