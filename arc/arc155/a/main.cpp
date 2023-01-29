#include <bits/stdc++.h>
using namespace std;

using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i, n) for (int i = n; i >= 0; i--)

int main() {
  ll t;
  cin >> t;
  rep(i, t) {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    bool flag = false;

    if (n < k) {
      if (k % n == 0) {
        cout << "Yes" << endl;
        continue;
      } else {
        rep (j , n / 2) {
          if (s.substr(0, n / 2 - j) == s.substr(n / 2 + j, n - 1)) {
            if ((k + (n / 2) - j) % (n / 2 + j) == 0) {
              cout << "Yes" << endl;
              flag = true;
              break;
            }
          }
        }
        if (flag) {
          continue;
        } else {
          cout << "No" << endl;
          continue;
        }
      }
    }
    if (s.substr((n + k) / 2, n - 1) == s.substr(0, n - (n + k) / 2) && s.substr(0, n - (n + k) / 2) == s.substr((n + k) / 2, (n - 1))) {
      cout << "Yes" << endl;
      continue;
    } else {
      cout << "No" << endl;
      continue;
    }
  }
  return 0;
}
