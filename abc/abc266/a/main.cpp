#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

int n;
string s;

int main() {
  cin >> s;
  n = s.size();
  cout << s[n/2] << endl;
  return 0;
}
