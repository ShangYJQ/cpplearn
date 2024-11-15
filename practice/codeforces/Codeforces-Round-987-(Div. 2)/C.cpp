#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
#define endl '\n'
#define N 100005
using namespace std;

inline int read()
{
    int x = 0, f = 1;
    char c = getchar();
    while (c < '0' || c > '9')
    {
        if (c == '-')
            f = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9')
    {
        x = (x << 1) + (x << 3) + (c ^ 48);
        c = getchar();
    }
    return x * f;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t = read();
    while (t--)
    {
        int n = read();
        if (n & 1)
            cout << -1 << endl;
        else
        {
            for (int i = 1; i <= n / 2; i++)
            {
                cout << i << " " << i << " ";
            }
            cout << endl;
        }
    }

    return 0;
}