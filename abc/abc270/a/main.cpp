#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int a, b, ans = 0;
  cin >> a >> b;
  if (a % 2 == 1 || b % 2 == 1) ans += 1;
  if ((a >= 2 && a != 4 && a != 5) || (b >= 2 && b != 4 && b != 5)) ans += 2;
  if (a >= 3 || b >= 3) ans += 4;
  cout << ans << endl;
  return 0;
}
