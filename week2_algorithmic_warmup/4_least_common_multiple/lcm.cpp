#include <iostream>

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
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
  long long int less = a + b - more;
  long long int lcm = (a * b) / gcd_eff(more, less);
  std::cout << lcm << std::endl;
  return 0;
}
