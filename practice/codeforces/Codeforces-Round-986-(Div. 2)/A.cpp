#include <bits/stdc++.h>
#define ull unsigned long long
#define N 100006
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        string s;
        cin >> n >> a >> b;
        cin >> s;
        int x = 0, y = 0;

        bool yes = 0;
        for (int i = 0; i < 100; i++)
        {
            for (char m : s)
            {
                if (m == 'N')
                {
                    y++;
                }
                else if (m == 'E')
                {
                    x++;
                }
                else if (m == 'S')
                {
                    y--;
                }
                else if (m == 'W')
                {
                    x--;
                }
                if (x == a && y == b)
                {
                    yes = 1;
                    break;
                }
            }
            if (yes)
                break;
        }
        if (yes)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
