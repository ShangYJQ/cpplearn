#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

vector<int> vec = {1, 3, 5, 7, 9};

void test(vector<vector<int>> &v) // 这里可以不引用。
{
    cout << v[0][0] << endl;
}

int main()
{

    for (int i : vec)
        cout << i << ' ';
    cout << endl;
    cout << vec.size();

    vec.resize(10, 2); // 使用resize进行空间预留可以更快！！
    for (int i : vec)
        cout << i << ' ';
    cout << endl;

    sort(vec.begin(), vec.end(), [](int a, int b) { return a >= b; }); // 使用lambda表达式进行排序

    for (int i : vec)
        cout << i << ' ';
    cout << endl;

    // vector二维数组

    vector<vector<int>> vec2 = {{1, 2, 3}, {2, 3}};

    for (vector<int> i : vec2)
    {
        for (int j : i)
        {
            cout << j << ' ';
        }
        cout << endl;
    }
    cout << endl;

    cout << vec2[1][1] << endl;

    test(vec2);
    return 0;
}
