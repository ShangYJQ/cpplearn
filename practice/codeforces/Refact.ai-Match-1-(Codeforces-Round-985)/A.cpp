#include <bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int l, r, k;
    while (t--)
    {
        cin >> l >> r >> k;
        cout << max((r/k)-l+1,0) << '\n';
    }

    return 0;
}
