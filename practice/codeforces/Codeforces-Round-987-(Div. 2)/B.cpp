#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t, n, tmp;
    bool flag = false;
    cin >> t;
    while (t--)
    {
        flag = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> tmp;
            if (flag == 1)
                continue;
            if (abs(tmp - i) > 1)
            {
                flag = 1;
            }
        }
        flag ? cout << "No\n" : cout << "Yes\n";
    }

    return 0;
}