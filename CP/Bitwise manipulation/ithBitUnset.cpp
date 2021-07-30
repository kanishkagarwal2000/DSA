#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,num=7,transformed,k=1;
    cout<<"Bit to unset:";
    cin>>i;
    k=k<<i-1;//bit masking
    transformed=num&(~k);
    cout<<transformed;
    return 0;
}