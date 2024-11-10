#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

unsigned long long n, b, c;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    unsigned long long t;
    cin >> t;
    while (t--)
    {
        cin >> n >> b >> c;

        if (b == 0)
        {
            if (c == 0)
            {
                cout << -1 << endl;
                continue;
            }
            if (c <= n - 1)
            {
                cout << n - 1 << endl;
                continue;
            }
            else
            {
                cout << n << endl;
                continue;
            }
        }
        long long tmp = ((n - 1 - c) / b) + 1;
        if ((n - 1 - c) < 0)
            tmp = 0;
        cout << n - tmp << endl;
    }

    return 0;
}
