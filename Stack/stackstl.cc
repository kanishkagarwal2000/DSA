#include<bits/stdc++.h>
using namespace std;

/*
The functions associated with stack are: 
empty() – Returns whether the stack is empty – Time Complexity : O(1) 
size() – Returns the size of the stack – Time Complexity : O(1) 
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
pop() – Deletes the top most element of the stack – Time Complexity : O(1) 

*/
int main()
{
    stack<int> a;
    a.push(10);
    a.push(20);
    a.push(30);
    while (!a.empty()) {
        cout << ' ' << a.top();
        a.pop();
        
    }

    return 0;
}