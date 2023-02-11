#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

vector<ll> a;

int main() {
  rep(i, 5) {
    ll x;
    cin >> x;
    a.push_back(x);
  }
  sort(all(a));
  int cnt = 0;
  cnt += count(all(a), a[0]);
  if (cnt != 3 && cnt != 2) {
    cout << "No" << endl;
    return 0;
  }
  cnt += count(all(a), a[4]);
  if (cnt == 5) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
