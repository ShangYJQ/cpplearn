/*
 * STL（Standard Template Library）中的 list 是一个双向链表容器
 * 模拟双端队列
 * push_front(x) 将元素 x 插入到队列的前端。
 * push_back(x) 将元素 x 插入到队列的后端。
 * pop_front() 删除队列前端的元素。如果队列为空，输出 -1。
 * pop_back() 删除队列后端的元素。如果队列为空，输出 -1。
 * front() 输出队列前端的元素。如果队列为空，输出 -1。
 * back() 输出队列后端的元素。如果队列为空，输出 -1。
 * */

#include <bits/stdc++.h>
using namespace std;

list<int> _deque = {1, 2, 3, 4, 5};

void print(list<int> l)
{

    cout << endl;
    for (int i : l)
        cout << i << ' ';
    cout << endl;
}

int main()
{

    print(_deque);
    _deque.push_back(0);
    print(_deque);

    _deque.sort();
    print(_deque);

    _deque.reverse();
    print(_deque);

    _deque.erase(++_deque.begin()); // 这里是迭代器哦！！
    print(_deque);

    _deque.push_front(3);
    print(_deque);
    _deque.remove(3);
    print(_deque); // 会删除所有的元素，不只是第一个！！！

    cout << endl;
    cout << _deque.front() << ' ' << _deque.back() << endl;

    list<int> l1 = {1, 5, 7, 9};
    list<int> l2 = {3, 6, 9, 12, 35};
    l1.merge(l2);
    print(l1);
    cout << endl << l2.empty(); // merge类似于归并排序，会将有序的list去重移动到l1，但是l2会元素消失。
    return 0;
}
