// 直接拿queue在bfs中的例子，这个是求最短路径的bfs算法。
#include <bits/stdc++.h>
#define N 50

using namespace std;

int r, c;
vector<vector<bool>> m(N, vector<bool>(N));
bool flag[N][N];
int dis[N][N];

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

struct node
{
    int x = 0, y = 0;
};

queue<node> q;

void bfs(int x, int y)
{
    node start;
    start.x = x, start.y = y;
    q.push(start);
    flag[x][y] = 1;
    dis[x][y] = 1;
    while (!q.empty())
    {
        node a = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int xx = a.x + dx[i], yy = a.y + dy[i];
            if (xx == 0 || yy == 0 || xx > r || yy > c || m[xx][yy] == 1 || flag[xx][yy] == 1)
                continue;
            dis[xx][yy] = dis[a.x][a.y] + 1;
            node next;
            next.x = xx, next.y = yy;
            q.push(next), flag[xx][yy] = 1;
        }
    }
}

int main()
{

    freopen("queueInBfs.in", "r", stdin);

    bool tmp;

    cin >> r >> c;
    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++)
        {
            cin >> tmp; // 这里不可以直接cin
                        // vector<bool> 与 vector<int>是有区别的
            m[i][j] = tmp;
        }

    memset(dis, -1, sizeof(dis));
    bfs(1, 1);
    cout << dis[r][c] << endl;

    return 0;
}
