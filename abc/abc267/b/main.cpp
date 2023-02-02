#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

string s;
vector<bool> pin(10);

int main() {
  cin >> s;
  rep(i, s.size()) pin[i] = s[i] - '0';
  if (pin[0] == 1) {cout << "No" << endl; return 0;}
  bool check[7] = {0};
  check[0] = pin[6];
  check[1] = pin[3];
  check[2] = pin[1] || pin[7];
  check[3] = pin[0] || pin[4];
  check[4] = pin[2] || pin[8];
  check[5] = pin[5];
  check[6] = pin[9];
  rep(i, 7) {
    rep(j, i) {
      if(check[i] && check[j]) {
        Rep(k, j+1, i) {
          if (!check[k]) {
            cout << "Yes" << endl;
            return 0;
          }
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
