#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

int n, m;
vector<int> a;

int main() {
  cin >> n >> m;
  rep(i,n) a.push_back(0);
  rep(i,m-n) a.push_back(1);
  do{
    rep(i,m) if(a[i] == 0) cout << i+1 << " ";
    cout << endl;
  }while(next_permutation(all(a)));
  return 0;
}
