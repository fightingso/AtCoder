#include <bits/stdc++.h>
using namespace std;

double x, k, p = 1;

int main() {
  cin >> x >> k;
  for (int i = 0; i < k; i++) {
    p *= 10;
    x /= p;
    x = round(x);
    x *= p;
  }
  cout << setprecision(20);
  cout << x << endl;
  return 0;
}
