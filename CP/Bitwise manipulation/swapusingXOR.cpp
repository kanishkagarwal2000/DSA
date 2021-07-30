#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=5,b=7;
    cout<<"\na="<<a<<"\nb="<<b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"\nSWAP SWAP SWAP SWAP";
    cout<<"\na="<<a<<"\nb="<<b;

    return 0;

}