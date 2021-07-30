#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=24;//11000
    int b=17;//10001
    int c,d,e,f,g;
    c=a&b;
    d=a|b;
    e=a^b;//if both 0 or 1 then 0 else 1
    f=a<<4;//same as multiplying by pow(2,k),k=4 here
    g=a>>2;//same as dividing by pow(2,k),k=2 here
    cout<<"a*b="<<a*b<<endl;
    cout<<"a&b="<<c<<"\n";
    cout<<"a+b="<<a+b<<endl;
    cout<<"a|b="<<d<<endl;
    cout<<"a^b="<<e<<endl;
    cout<<"a<<4="<<f<<endl;
    cout<<"a>>2="<<g<<endl;
    
    return 0;
}