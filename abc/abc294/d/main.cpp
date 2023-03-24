#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

int main() {
  ll n,q;
  cin >> n >> q;
  queue<ll> call;
  vector<bool> come(n+1,false);
  set<ll> notcome;
  rep(i,n) call.push(i+1);
  rep(i,q){
    int type;
    cin >> type;
    if(type==1){
      ll id = call.front();
      call.pop();
      notcome.insert(id);
    }else if(type==2){
      ll id;
      cin >> id;
      come[id]=true;
      notcome.erase(id);
    }else{
      ll id = *notcome.begin();
      cout << id << endl;
    }
  }
  return 0;
}
