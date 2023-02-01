#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int x, y, z;
  cin >> x >> y >> z;
  if (y < 0) {x = -x; y = -y; z = -z;}
  if (x < y) cout << abs(x) << endl;
  else
    if (z > y) cout << -1 << endl;
    else cout << abs(z) + abs(x - z) << endl;
  return 0;
}
