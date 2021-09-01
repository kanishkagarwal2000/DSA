/*
Number of bits required to change 1 number to another i.e. a->b
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=5,b=15;//0101 , 1111
    int c,d;
    d=a^b;  // 1010 d stores the result which contains the bits which is needed to be change
    //now we only have to count number of set bits in d
    c=0;
    while(d)
    {
        d&=d-1;
        c++;
    }
    cout<<c;
    return 0;
}