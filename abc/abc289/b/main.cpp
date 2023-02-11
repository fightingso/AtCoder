#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

const int N=1000005;

vector<int> g[N];
int n,m,a[N];
bool used[N];

void dfs(int v)
{
    used[v]=true;
    for(int i=0;i<g[v].size();i++)
    {
        int to=g[v][i];
        if(!used[to])
            dfs(to);
    }
    cout<<v<<' ';
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        g[a[i]].push_back(a[i]+1);
        g[a[i]+1].push_back(a[i]);
    }

    for(int i=1;i<=n;i++)
    {
        if(!used[i])
            dfs(i);
    }
    return 0;
}

