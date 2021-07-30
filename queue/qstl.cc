#include<bits/stdc++.h>
using namespace std;
/*
 The functions supported by queue are : 

empty() – Returns whether the queue is empty.
size() – Returns the size of the queue.
queue::swap() in C++ STL: Exchange the contents of two queues but the queues must be of same type, although sizes may differ.
queue::emplace() in C++ STL: Insert a new element into the queue container, the new element is added to the end of the queue.
queue::front() and queue::back() in C++ STL– front() function returns a reference to the first element of the queue. back() function returns a reference to the last element of the queue.
push(g) and pop() – push() function adds the element ‘g’ at the end of the queue. pop() function deletes the first element of the queue.
*/

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    while (!q.empty()) {
        cout << ' ' << q.front();
        q.pop();
    }
    return 0;
}