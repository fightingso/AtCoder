#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s;
  cin >> s;
  if (s == "Monday") cout << 5 << endl;
  if (s == "Tuesday") cout << 4 << endl;
  if (s == "Wednesday") cout << 3 << endl;
  if (s == "Thursday") cout << 2 << endl;
  if (s == "Friday") cout << 1 << endl;
  return 0;
}
