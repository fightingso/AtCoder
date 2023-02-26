#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

ll n;

int main() {
  cin >> n;
  ll nn = 5 * n;
  vector<double> a(nn);
  rep(i,nn) cin >> a[i];
  sort(all(a));
  double sum = 0;
  Rep(i, n, nn - n) sum += a[i];
  cout << fixed << setprecision(6) << sum / (nn - 2 * n) << endl;
  return 0;
}

