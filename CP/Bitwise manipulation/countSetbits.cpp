//Brian's Kernigham Algorithm

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=15,c=0;
    while(n)
    {
        n&=n-1;
        c++;
    }
    cout<<c;
    return 0;
}