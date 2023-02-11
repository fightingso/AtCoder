#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

ll n, same = 0, cnt;
vector<ll> a;

int main() {
  cin >> n;
  a.resize(n);
  rep(i, n) {cin >> a[i]; a[i]--; if (a[i] == i) same++;}
  cnt = same * (same - 1) / 2;
  rep(i, n) if (a[i] > i && a[a[i]] == i) cnt++;
  cout << cnt << endl;
  return 0;
}
