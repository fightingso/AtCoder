#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, cnt = 0;
    vector<int> x(5);

    cin >> a;
    for (int i = 0; i < 5; i++)
    {
        cin >> x.at(i);
    }

    for (int i = 0; i < 5; i++)
    {
        if (x.at(i) == a)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
}
