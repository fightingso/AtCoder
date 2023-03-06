#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

 ll n, l, k;
 ll a[100005];

bool check(ll m) {
  ll cnt = 0, pre = 0;
  Rep(i, 1, n + 1)
    if (a[i] - pre >= m && l - a[i] >= m) {cnt++; pre = a[i];}
  return cnt >= k;
}

int main() {
  cin >> n >> l >> k;
  Rep(i, 1, n + 1) cin >> a[i];
  ll left = -1, right = l + 1;
  while (right - left > 1) {
    ll mid = (left + right) / 2;
    if (!check(mid)) right = mid;
    else left = mid;
  }
  cout << left << endl;
  return 0;
}

