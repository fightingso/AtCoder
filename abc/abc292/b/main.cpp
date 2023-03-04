#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  rep(i, q) {
    int c, x;
    cin >> c >> x;
    if (c == 1) {a[x - 1] += 1; continue;}
    if (c == 2) {a[x - 1] += 2; continue;}
    if (c == 3) {
      if (a[x - 1] >= 2) cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  }
  return 0;
}
