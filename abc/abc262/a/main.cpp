#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

ll y;

int main() {
  cin >> y;
  y -= 2;
  if (y % 4 == 0) {cout << y + 2 << endl; return 0;}
  y += 6 - y % 4;
  cout << y << endl;
  return 0;
}
