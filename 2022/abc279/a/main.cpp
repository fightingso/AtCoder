#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 0;
    string S;
    cin >> S;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'v')
        {
            cnt++;
        }
        else
        {
            cnt += 2;
        }
    }

    cout << cnt << endl;
}
