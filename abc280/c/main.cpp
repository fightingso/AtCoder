#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;
    S += " ";

    for (unsigned long i = 0; i < S.size(); ++i)
    {
        if (S.at(i) != T.at(i)) {
            cout << i + 1 << endl;
            break;
        }
    }
}
