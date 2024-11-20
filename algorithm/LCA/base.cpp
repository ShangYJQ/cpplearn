#include<bits/stdc++.h>
#include <vector>
using namespace std;

constexpr int MAXN = 1005;

int cnt = 0;

struct node{
    int to = -1;
    int w = -1;
    int nxt = -1;
};

vector<node> edges(MAXN);
vector<int> head(MAXN,-1);

void add(int u,int v,int w)
{
    edges[cnt].to = v;
    edges[cnt].w = w;
    edges[cnt].nxt = head[u];
    head[u] = cnt++;
}

int main()
{


    return 0;
}
