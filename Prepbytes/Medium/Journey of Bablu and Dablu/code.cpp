#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    int rem = n % 8;

    if (rem == 0)
    {
        cout << --n << "SL";
    }
    else if (rem == 1 || rem == 2 || rem == 3)
    {
        cout << n + 3;

        if (rem == 1)
        {
            cout << "LB";
        }

        if (rem == 2)
        {
            cout << "MB";
        }
        if (rem == 3)
        {
            cout << "UB";
        }
    }
    else if (rem == 4 || rem == 5 || rem == 6)
    {
        cout << n - 3;

        if (rem == 4)
        {
            cout << "LB";
        }

        if (rem == 5)
        {
            cout << "MB";
        }
        if (rem == 6)
        {
            cout << "UB";
        }
    }
    else
    {
        cout << ++n << "SU";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}