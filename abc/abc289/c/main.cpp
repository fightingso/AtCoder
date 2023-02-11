#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

const int N=1e5+10;
int n,m,ans;
bitset<N> f[N];
int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int k,x;
        cin>>k;
        for(int j=0;j<k;j++){
            cin>>x;
            f[i][x]=1;
        }
    }
    for(int i=0;i<(1<<m);i++){
        int flag=1;
        bitset<N> g;
        for(int j=0;j<m;j++){
            if(i&(1<<j)) g|=f[j+1];
        }
        for(int j=1;j<=n;j++){
            if(g[j]==0){
                flag=0;
                break;
            }
        }
        if(flag) ans++;
    }
    cout<<ans<<endl;
    return 0;
}

