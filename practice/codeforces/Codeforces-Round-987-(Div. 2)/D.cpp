#include <bits/stdc++.h>

using namespace std;

struct Data
{
    int ind = -1;
    int height = -1;
    // Data() : ind(-1), height(-1) {}
};

vector<Data> node(200005);
vector<int> dp(200005, 0);

int main()
{

    // freopen("a.in", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t, n, a;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            node[i].height = a;
            node[i].ind = i;
            dp[i] = a;
        }

        // cout << '\n';
        // for (int i = 1; i <= n; i++)
        //     cout << node[i].height << ' ';
        // cout << '\n';

        sort(node.begin() + 1, node.begin() + n + 1, [](Data a, Data b) -> bool
             { return a.height > b.height; });

        cout << '\n';
        for (int i = 1; i <= n; i++)
            cout << node[i].height << ' ';
        cout << '\n';

        for (int k = 1; k <= n; k++)
        {
            for (int j = 1; j <= n; j++)
            {
                int jh = node[j].height;
                int jindex = node[j].ind;
                for (int i = 1; i <= n; i++)
                {
                    if (i == j)
                        continue;
                    int ih = node[i].height;
                    int iindex = node[i].ind;
                    if ((jindex < iindex && jh > ih) || (jindex > iindex && jh < ih))
                    {
                        dp[jindex] = max(dp[jindex], ih);
                    }
                }
            }
            for (int i = 1; i <= n; i++)
                cout << dp[i] << ' ';
            cout << '\n';
        }

        for (int i = 1; i <= n; i++)
            cout << dp[i] << ' ';
        cout << '\n';
    }

    return 0;
}